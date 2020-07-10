package main

import (
	"fmt"
)

func main() {
	fmt.Println("THis is string reverse demo")
	fmt.Println(string_rev("olleh"))

}

func string_rev(s string) string {
	runes := []rune(s)
	for i, j := 0, len(runes)-1; i < j; i, j = i+1, j-1 {
		runes[i], runes[j] = runes[j], runes[i]
	}
	return string(runes)
}
