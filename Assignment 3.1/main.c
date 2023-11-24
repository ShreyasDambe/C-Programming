#include <stdio.h>
#include <stdlib.h>


chknum(int number)
{
    int ino=0;

    if(ino=number%2==0)
    {
        printf("Number is Even");
    }

    else
    {
        printf("number is Odd");
    }
}

int main()
{
    int ivalue=0;

    printf("Enter a Number :");
    scanf("%d",&ivalue);

    chknum(ivalue);

    return 0;
}
