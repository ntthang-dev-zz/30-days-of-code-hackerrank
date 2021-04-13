#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// Driver code
int main() {
    // Declare a variable named 'input_string' to hold our input.
    char input_string[105];

    // Will read user input until enter is pressed or a newline character 
    // is added (\n) and store it into a variable named input_string.
    scanf("%[^\n]s", input_string);

    // Print a string literal saying "Hello, World." to stdout using printf.
    printf("Hello, World.\n");

    // TODO: Write a line of code here that prints the contents of input_string to stdout.
    printf("%s",input_string); 

    return 0;
}