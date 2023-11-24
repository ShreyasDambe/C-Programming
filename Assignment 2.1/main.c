#include <stdio.h>
#include <stdlib.h>

divide(int ino1,int ino2)
{
    int iAns=0;
    if(ino2%2==0)
    {
        return -1;

    }

    iAns=ino1,ino2;

    return 0;
}

int main()
{
    int ivalue1=25;
    int ivalue2=2;
    int iRet=0;

    iRet=divide(ivalue1,ivalue2);

    printf("Division is %d",iRet);

    return 0;
}
