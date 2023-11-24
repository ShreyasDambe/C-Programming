#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inum=0;

    for(inum=1;inum<=20;inum++)
    {
        if(inum%2==0)
        {
            printf("%d\n",inum);
        }
    }
    return 0;
}
