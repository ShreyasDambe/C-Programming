#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inum1=0;
    int inum2=0;

    int irow=0;
    int icol=0;

    printf("Enter a Row:");
    scanf("%d",&irow);

    printf("Enter a col:");
    scanf("%d",&icol);

    for(inum1=1;inum1<=irow;inum1++)
    {
        for(inum2=1;inum2<=icol;inum2++)
        {
            if(inum2==icol-1 || inum2==icol )
            {
                printf("%d ",inum2);
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
return 0;
}
