#include<stdio.h>

int main()
{
    char cchar='\0';

    char lowercase_vowel,uppercase_vowel;

    printf("enter a Character:");
    scanf("%c",&cchar);

    lowercase_vowel=(cchar=='a' || cchar=='e' || cchar=='i' || cchar=='o' || cchar=='u');
    uppercase_vowel=(cchar=='A' || cchar=='E' || cchar=='I' || cchar=='O' || cchar=='U');

    if(lowercase_vowel || uppercase_vowel)
    {
        printf("%c It is Vowel!!!",cchar);
    }
    else
    {
        printf("%c It is Not Vowel!!!",cchar);
    }
return 0;
}
