//FA20-BSE-107
//AMEER MOAVIA
/*C program to check whether a number is divisible by 5 and 11 or not.*/

#include<stdio.h>
#include<conio.h>
int main()
{
  int m;
  printf("Please enter the Number :");
  scanf("%d",&m);
  if(m%5==0 && m%11==0)
    printf("The num %d is divisible by 5 and 11",m);
   else
    printf("The number %d is not divisible by 5 and 11",m);


  return 0;

}

