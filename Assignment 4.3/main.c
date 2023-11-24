#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inum1=0;
    int inum2=0;

    int irow=0;
    int icol=0;

    printf("Enter odd number of rows:");
    scanf("%d",&irow);

    printf("Enter odd number of col:");
    scanf("%d",&icol);

    for(inum1=1;inum1<=irow;inum1++)
    {
        for(inum2=1;inum2<=icol;inum2++)
        {
            if(inum1%2==1&&inum2%2==0 || inum1==1&&inum2==1 || inum1==1&&inum2==icol ||inum1==irow&&inum2==1 || inum1==irow&&inum2==icol  )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

return 0;
}
