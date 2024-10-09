package main

import (
	"fmt"
	"strings"
)

func main() {
	str := "résumés"
	strRune := []rune(str)
	strLen := len([]rune(str))
	fmt.Printf("The string length is %v\n", strLen)

	for i, ch := range strRune {
		ch_bytes := []byte(string(ch))
		for _, b := range ch_bytes {
			fmt.Printf("The binary representation for %v is %08b at index %v\n", string(ch), b, i)
		}
	}

	stringSlice := []string{"H", "e", "l", "l", "o"}

	var strBuilder strings.Builder
	for _, ch := range stringSlice {
		strBuilder.WriteString(ch)
	}

	// this is very similar to string builder in java. both aren't thread safe but java has string buffer for thread safetiness
	// go has goroutines and channels
	var castStr = strBuilder.String()
	fmt.Printf("Newly created string: %s\n", castStr)
}
