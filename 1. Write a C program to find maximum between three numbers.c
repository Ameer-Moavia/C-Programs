//FA20-BSE-107
//AMEER MOAVIA
/*C program to find maximum between three numbers.*/

#include<stdio.h>
#include<conio.h>

int main()
{

    int a,b,c,k;
    printf("PLEASE ENTER THREE NUMBERS :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
     k=a>c?a:c;
    }
    else{
        k=b>c?b:c;
        }
 printf("The Maximum Number is : %d",k);
    return 0;
}
