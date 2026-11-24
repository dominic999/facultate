package main

import (
	"fmt"
	"time"
	"math/rand"
)

// stocheaza deviatia fata de timpul real
type Clock struct{ offset time.Duration }

func (c *Clock) Now() time.Time { return time.Now().Add(c.offset) }

// TODO:
// Calculeaza decalajul theta si round -trip -ul delta
func estimate(t1, t2, t3, t4 time.Time) (theta , delta time.Duration) {
	delta = t4.Sub(t1) - t3.Sub(t2)
	theta = t3.Add(delta / 2).Sub(t4)
	return theta, delta
}

func measure(c_clock , s_clock *Clock) (theta , delta time.Duration) {
	// Request
	t1 := c_clock.Now()
	time.Sleep(3*time.Millisecond + time.Duration(rand.Intn(10))*time.Millisecond)
	t2 := s_clock.Now()
	// Procesare intre 5 si 20 ms
	time.Sleep(5*time.Millisecond + time.Duration(rand.Intn(20))*time.Millisecond)
	t3 := s_clock.Now()
	// Response
	time.Sleep(3*time.Millisecond + time.Duration(rand.Intn(10))*time.Millisecond)
	t4 := c_clock.Now()
	return estimate(t1, t2, t3, t4)
}

func main(){
	client := Clock{offset: 150 * time.Millisecond}
	server := Clock{offset: 0} 
	theta, delta := measure(&client, &server)
	fmt.Printf("Theta: %d, Delta: %d", theta, delta)
}
