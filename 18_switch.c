#include <stdio.h>

int main()
{
    int a;
    printf("Enter a:");
    scanf("%d",&a);

    switch(a){
        case 1:
        {
            printf("you print 1\n");
        }
        break;
        case 2:
        {   printf("you print 2\n");
        }
        break;
        case 3:
        {
            printf("you print 3\n");
        }       
        break;
        case 4:
        {
            printf("you print 4\n");
        }
        break;
        default :
        printf("Nothing entered");
        
    
}
    return 0;
}