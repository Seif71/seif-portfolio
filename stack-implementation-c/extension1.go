// extension1 task: Write other example programs that show unique features of the syntax, naming, or scoping in the selected language.

package main

import "fmt"

func splitSum(a, b int) (x, y int) { // Named return values x and y
    x = a + b
    y = a - b
    return // Naked return uses named values
}

func main() {
    sum, diff := splitSum(10, 5)
    fmt.Println("Sum:", sum)   // Sum: 15
    fmt.Println("Diff:", diff) // Diff: 5
}