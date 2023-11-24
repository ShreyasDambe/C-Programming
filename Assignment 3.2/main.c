#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ino=0;

    printf("enter a number:\n");
    scanf("%d",&ino);

    if(ino>0)
    {
        printf("nNumber is Positive!!!");
    }

    else if(ino<0)
    {
        printf("Number is Negative!!!");
    }

    else
    {
        printf("number is Zero!!!");
    }

    return 0;
}
