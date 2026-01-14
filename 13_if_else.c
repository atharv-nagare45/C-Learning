#include <stdio.h>

int main()
{
    int a;
    printf("What is your age:");
    scanf("%d",&a);
    if (a>10)
    {
        printf("We are inside if:\n");
        printf("Your age is greater than:10\n");
    }
    else{
        printf("You are not eligible");
    }
    return 0;
}