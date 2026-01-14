#include <stdio.h>

int main()
{
    // VALID
    int a;   // declare of integer variable 'a'
    float b; // declare of float variable 'b'
    char c;  // declare a char variable 'c'

    int i = 10;               // declare and initialize 'i'
    int j = i;                // declare j and initialize with 'i'
    int a = 2, b = 3, c = 10; // declare and initialize multiple variables.
    int j1 = a + j + i;       // valid: use previously defined variables.
    // we can use also
    int a = b = c = 40; // all are equal to 40;
    return 0;
}
// INVALID
/*
float b=a+3; because 'a' used before in code
float a=1.1;
*/