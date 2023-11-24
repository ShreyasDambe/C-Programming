#include<stdio.h>
#include<conio.h>

int main()
{
    char cchar[2];
    int i=0;

    printf("Enter a Character:");
    scanf("%s",&cchar);

    for(i=0;i<=strlen(cchar);i++)
    {
        if(cchar[i]>=65 && cchar[i]<=90)
        {
            cchar[i]=cchar[i]+32;
            printf("\n Lowercase is: %s",cchar);
        }

        else if (cchar[i]>=97 && cchar[i]<=122)
        {
            cchar[i]=cchar[i]-32;
            printf("\n Uppercase is: %s",cchar);
        }

        else
        {
            return -1;
        }
    }
    return 0;
}
