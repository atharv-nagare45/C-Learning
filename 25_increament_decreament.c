#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i is %d\n",i);
    i=i+5;
    printf("The value of i is %d\n",i);
    i++;
    printf("The value of i is %d\n",i);
    /*
    i+=2 same as i=i+2
    i-=2 same as i=i-2
    i*=2 same as i=i*2
    */
    printf("The value of i is %d\n",i);
    ++i;
    printf("The value of i is %d\n",i);
    // i++ print i first and then increament i (post increament operator)
    // ++i increament i first and then print i (post decreament operator)
    return 0;
}
//All these condition apply for decreament!!