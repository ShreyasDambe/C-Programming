#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inum=0;
    int i=0;

    printf("enter a number:");
    scanf("%d",&inum);

    printf("Even Factors of %d is: ",inum);

    for(i=1;i<=inum;i++)
    {
        if(inum%i==0 && i%2==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
