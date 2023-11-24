#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ivalue=0;

    printf("Enter a Number:");
    scanf("%d",&ivalue);

    if(ivalue>=100)
    {
        printf("Number is Greater");
    }

    else
    {
        printf("Number is Smaller");
    }

    return 0;
}
