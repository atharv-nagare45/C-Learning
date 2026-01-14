#include <stdio.h>

int main()
{
    int a = 4;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d \n and the value of b is %d\n and the sum of both number is %d \n", a, b, c);
    // modulus operator is use to get a remainder
    printf("The remainder of calculation if we divide a by b is %d", a % b);
    return 0;
}