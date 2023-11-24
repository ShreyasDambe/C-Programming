#include <stdio.h>
#include <stdlib.h>

int main()
{
    int income=0;
    int tax=0;
    int income1=0;
    int iAmt=0;
    int iAmt2=0;

    printf("Enter your income :\n");
    scanf("%d",&income);


    if(income<250000)
    {
        printf("your income is less than 250000 so you are Tax free\n");
    }
    else if(income>250000 && income<500000)
    {
         tax=income*10/100;
        printf("your income tax is %d\n",tax);
        //tax=income*5/100;                                                  //income tax formula=income*percentage/100
    }

    else if(income>50000 && income<1000000)
    {
        iAmt=25000;
        income=income-500000;
        tax=income*20/100;

        tax=tax+iAmt;
        printf("your income tax is %d\n",tax);
    }

    else if(income>1000000)
    {
        iAmt=25000;                  //As per 10% on 250000
        iAmt2=100000;                  //As per 20% on 500000
        income=income-1000000;
        tax=income*30/100;

        tax=tax+iAmt+iAmt2;
        printf("your income tax is %d\n",tax);

    }
    else
        printf("Invalid Income\n");

    return 0;
}
