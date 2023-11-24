#include <stdio.h>




void Accept(int ino)
{
    int inum=0;

    for(inum=1;inum<=ino;inum++)
    {
        printf("* ");
        printf("$\n");
    }
}

int main()
{
    int ivalue=0;

    printf("Enter a Number:");
    scanf("%d",&ivalue);

    Accept(ivalue);

    return 0;
}
