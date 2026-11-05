package main

import (
	"fmt"
	"math/rand"
	"time"
)

type Clock struct {
	offset time.Duration
}

func (c *Clock) Now() time.Time {
	return time.Now().Add(c.offset)
}

func estimate(t1, t2, t3, t4 time.Time) (theta, delta time.Duration) {
	delta = t4.Sub(t1) - t3.Sub(t2)
	theta = t3.Add(delta / 2).Sub(t4)
	return theta, delta
}

func measure(c_clock, s_clock *Clock) (theta, delta time.Duration) {
	t1 := c_clock.Now()
	time.Sleep(3*time.Millisecond + time.Duration(rand.Intn(10))*time.Millisecond)
	t2 := s_clock.Now()

	time.Sleep(5*time.Millisecond + time.Duration(rand.Intn(20))*time.Millisecond)
	t3 := s_clock.Now()

	time.Sleep(3*time.Millisecond + time.Duration(rand.Intn(10))*time.Millisecond)
	t4 := c_clock.Now()

	return estimate(t1, t2, t3, t4)
}

func abatere(offset time.Duration) time.Duration {
	if offset < 0 {
		return -offset
	}
	return offset
}

func main() {
	offsetInitial := 150 * time.Millisecond
	client := Clock{offset: offsetInitial}
	server := Clock{offset: 0}

	fmt.Println("a) O masuratoare")
	fmt.Println("Offset initial:", client.offset)
	theta, delta := measure(&client, &server)
	deltaUnic := delta
	fmt.Println("Theta:", theta, "Delta:", delta)
	client.offset += theta
	offsetUnic := client.offset
	fmt.Println("Offset dupa corectie:", client.offset)
	fmt.Println("Abaterea a scazut:", abatere(client.offset) < abatere(offsetInitial))

	fmt.Println("\nb) Zece masuratori")
	var deltaMin, thetaMin, thetaRTTMin time.Duration
	for i := 0; i < 10; i++ {
		client.offset = offsetInitial
		theta, delta = measure(&client, &server)
		fmt.Printf("Masurarea %d: theta = %v, delta = %v\n", i+1, theta, delta)

		if i == 0 || theta < thetaMin {
			thetaMin = theta
		}
		if i == 0 || delta < deltaMin {
			deltaMin = delta
			thetaRTTMin = theta
		}
	}

	fmt.Println("Delta minim:", deltaMin)
	fmt.Println("Theta minim numeric:", thetaMin)
	fmt.Println("Theta asociat lui delta minim:", thetaRTTMin)
	client.offset = offsetInitial + thetaRTTMin
	fmt.Println("Offset dupa corectia de la RTT minim:", client.offset)
	fmt.Println("\nComparatie cu a):")
	fmt.Println("RTT la a):", deltaUnic, "RTT minim la b):", deltaMin)
	fmt.Println("Abatere la a):", abatere(offsetUnic))
	fmt.Println("Abatere la b):", abatere(client.offset))
}
