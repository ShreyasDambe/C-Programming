#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year=0;


    printf("Enter Year :\n");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("This Is A Leap Year!!!");
    }
    else
    {
        printf("This Is A Not Leap Year!!!");
    }

    return 0;
}
