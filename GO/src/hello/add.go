package main

import (
	"fmt"
	"strutil"
)

func main() {

	var x float32
	x = 20.0
	fmt.Println(x)
	fmt.Printf("x is of type %T\n", x)
	fmt.Println(strutil.Reverse("olleh"))

}
