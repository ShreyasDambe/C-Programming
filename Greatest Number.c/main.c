/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;

    printf("Enter A Number1 :\n");
    scanf("%d",&num1);

    printf("Enter A Number2 :\n");
    scanf("%d",&num2);

    printf("Enter A Number3 :\n");
    scanf("%d",&num3);

    printf("Enter A Number4 :\n");
    scanf("%d",&num4);

    if(num1>num2)
    {
        if(num1>num3)
        {
            if(num1>num4)
            {
                printf("num1  %d is Greater",num1);
            }
            else
            {
                printf("num4  %d is Greater",num4);
            }
        }
        else
        {
            printf("num3  %d is Greater",num3);
        }
    }
   else
    {

        printf("num2  %d is Greater",num2);
    }
    return 0;
}*/










#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;

    printf("Enter A Number1 :\n");
    scanf("%d",&num1);

    printf("Enter A Number2 :\n");
    scanf("%d",&num2);

    printf("Enter A Number3 :\n");
    scanf("%d",&num3);

    printf("Enter A Number4 :\n");
    scanf("%d",&num4);

    if(num1>num2)
    {
        printf("num1 %d is Greater",num1);
    }
    else if(num2>num3)
    {
        printf("num2 %d is Greater",num2);
    }
    else if(num3>num4)
    {
        printf("num3 %d is Greater",num3);
    }

    else
    {
        printf("num4 %d is Greater",num4);

    }
    return 0;
}
