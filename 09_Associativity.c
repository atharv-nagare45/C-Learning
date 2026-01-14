#include <stdio.h>

int main()
{
    int a = 3;
    int b = 6;
    int c = 9;
    printf("The value of given calculation is:%d", b * a / c * 7 + 2 / c);
    return 0;
}
/*
 b * a / c * 7 + 2 / c
 6 * 3 / c * 7 + 2 / c
 18 / 9 * 7 + 2 / c
 2 * 7 + 2 / c
 14 + 2 / 9
 14 + 0.22  (int neglect the number after point. To take it we must have to take float instead of int)
 14
*/