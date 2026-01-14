#include <stdio.h>

int main()
{
    int marks;
    char Grade;
    if(marks>=90 && marks<=100){
        Grade ='A';
    }
     else-if(marks>=80 && marks<=89){
        Grade ='B';
        printf("Congratulations!! you have passed");
    }
     else-if(marks>=70 && marks<=79){
        Grade ='C';
        printf("Congratulations!! you have passed");
    }
    else-if(marks>=60 && marks<=69){
        Grade ='D';
        printf("Congratulations!! you have passed");
    }
     else-if(marks>=50 && marks<=59){
        Grade ='E';
        printf("Congratulations!! you have passed");
    }
    else(marks<50)
    {
      Grade = 'F';
      printf("you failed");
    }
     return 0;
}
