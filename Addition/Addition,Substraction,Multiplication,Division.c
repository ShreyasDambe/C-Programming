#include <stdio.h>

int Addition(int ino1,int ino2);
int Substraction(int ino1,int ino2);
int Multiplication(int ino1,int ino2);
int Division(int ino1,int ino2);                 //Function Declaration

int Addition(int ino1,int ino2)                      //Function Defination
{
    int iAns =0;
    iAns=ino1+ino2;

    return iAns;

}

int Substraction(int ino1,int ino2)                      //Function Defination
{
    int iAns =0;
    iAns=ino1-ino2;

    return iAns;

}


int Multiplication(int ino1,int ino2)                      //Function Defination
{
    int iAns =0;
    iAns=ino1*ino2;

    return iAns;

}


int Division(int ino1,int ino2)                      //Function Defination
{
    int iAns =0;
    iAns=ino1/ino2;

    return iAns;

}


int main()
{
    int ivalue1=0;
    int ivalue2=0;
    int iResult=0;

    printf("Enter First value:");
    scanf("%d",&ivalue1);

     printf("Enter Second value:");
    scanf("%d",&ivalue2);

    iResult= Addition( ivalue1, ivalue2);             //function call
    printf("Addition of %d and %d is: %d",ivalue1,ivalue2,iResult);

    iResult= Substraction( ivalue1, ivalue2);             //function call
    printf("Substraction of %d and %d is: %d",ivalue1,ivalue2,iResult);

    iResult= Multiplication( ivalue1, ivalue2);             //function call
    printf("Multiplication of %d and %d is: %d",ivalue1,ivalue2,iResult);

    iResult= Division( ivalue1, ivalue2);             //function call
    printf("Division of %d and %d is: %d",ivalue1,ivalue2,iResult);

    return 0;
}
