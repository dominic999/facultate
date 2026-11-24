package main

type LamportClock struct{ 
	counter int 
}

// incrementeaza contorul
func (l *LamportClock) Tick() {
	(*l).counter += 1
}
func (l *LamportClock) Send() {}
func (l *LamportClock) Receive(ts int) {}

type Message struct{ 
	sender int 
	ts int 
}

type Event struct {
	process int
	internal_counter int
	kind string // "internal", "send", "recv"
}

// TODO: retuneaza true daca a precede b
func less(a, b Event) bool { 
	if a.internal_counter < b.internal_counter {
		return true
	}
	return false 
}

func main(){

}
