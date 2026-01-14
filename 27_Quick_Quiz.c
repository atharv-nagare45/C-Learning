#include <stdio.h>

int main()
{
    int i=0,n;
    printf("Enter:");
    scanf("%d",&n);
    do{
        printf("natural number: %d\n",i);
        i++;
    }
    while(i<=n);
    return 0;
}