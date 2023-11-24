
//write a program to find greatest number of four numbers entered by user





#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;

    printf("Enter a First Number:");
    scanf("%d",&num1);

    printf("Enter a Second Number:");
    scanf("%d",&num2);

    printf("Enter a Third Number:");
    scanf("%d",&num3);

    printf("Enter a Fourth Number:");
    scanf("%d",&num4);

        if (num1>num2)
            {
                if(num1>num3)
                   {
                       if(num1>num4)
                       {
                           printf("num1 %d is Greater",num1);
                       }
                       else
                       {
                           printf("num4 %d is Greater",num4);
                       }
                   }
            }
        else if(num2>num3)
                   {
                       if(num2>num4)
                       {
                           printf("num2 %d is Greater",num2);
                       }

                       else
                       {
                           printf("num4 %d is Greater",num4);
                       }
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








/*#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;

    printf("Enter a First Number:");
    scanf("%d",&num1);

    printf("Enter a Second Number:");
    scanf("%d",&num2);

    printf("Enter a Third Number:");
    scanf("%d",&num3);

    printf("Enter a Fourth Number:");
    scanf("%d",&num4);

        if (num1>num2)
            {
                if(num1>num3)
                    {
                        printf("num1 %d is greater\n",num1);
                    }
                else if(num1>num4)
                    {
                        printf("num3 %d is greater\n",num3);
                    }
            }
        else if(num2>num3)
            {
                printf("num2 %d is Greater\n",num2);
            }
        else
            {
                printf("num3 %d is Greater\n",num3);

            }
    return 0;
}*/

