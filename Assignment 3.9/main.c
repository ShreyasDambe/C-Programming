#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ino1=0;
    int ino2=0;

    printf("Enter a First Number:");
    scanf("%d",&ino1);

    printf("Enter a Second Number:");
    scanf("%d",&ino2);

    if(ino1==ino2)
    {
        printf("Numbers are Equal");

    }
    else
    {
        printf("Numbers are not Equal");
    }

    return 0;
}
