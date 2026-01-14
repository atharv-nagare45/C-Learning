#include <stdio.h>

int main()
{
    int i;
    for (i=0;i<8;i++){
        if(i==2){
            continue; //skip iteration
        }
        else if(i==7){
            break; //exit loop now!!
        }
        printf("i is %d\n",i);
    }
    return 0;
}