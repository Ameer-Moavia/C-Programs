//FA20-BSE-107
//AMEER MOAVIA
/*C program to check whether a number is negative, positive or zero.*/

#include<stdio.h>
#include<conio.h>

int main()
{
   float n;
   printf("Enter The Number Please:");
   scanf("%f",&n);
   if(n>0)
    printf("The Nmber %.2f is Postive",n);
     else if(n<0)
    printf("The Number %.2f is Negative ",n);
    else
    printf("The Number is zero");

    return 0;

}
