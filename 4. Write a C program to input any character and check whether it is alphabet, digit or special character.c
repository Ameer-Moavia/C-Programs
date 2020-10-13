//FA20-BSE-107
//AMEER MOAVIA
/*C program to input any character and check whether it is alphabet, digit or special character.*/

#include<stdio.h>
#include<conio.h>
int main()
{
   char ch;
     printf("Enter any Character:");
     scanf("%c",&ch);
    if
        ((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
    printf("The Character %c is an Alphabet",ch);
    else if
     ((ch>='0' && ch<='9'))
     printf("The character %c  is a Digit ",ch);
    else
    printf("The Character %c is a special character",ch);


    return 0;
}
