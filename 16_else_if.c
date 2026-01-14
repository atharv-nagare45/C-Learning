#include <stdio.h>

int main()
{
    int age;
    age = 46;
    if(age >50)
    {
        printf("You can drive and you are a senior citizen");
    }
    else if(age>45)
    {
        printf("You can drive and you are elder");
    }
    else if (age>30)
    {
        printf("You can drive and you are younger");
    }
    else if (age>18)
    {
    printf("You can drive,");
    }
    else
    {
        printf("You can't drive");
    }
    
}
/*
Note:-
1]Using if-else reduce indents
2] Rhe last else is optional
3] Also there can be any number of'else-if'
4]Last else executs only if all conditions are fail
*/