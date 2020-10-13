//FA20-BSE-107
//AMEER MOAVIA
/* C program to find all roots of a quadratic equation*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c,D;
    float x,y;
    printf("Enter coefficent of x^2,x and constant term:\n");
    scanf("%d%d%d",&a,&b,&c);

    D=b*b-4*a*c;
    if(D<0)
    printf("Both roots are imaginary");
    if(D==0){
      printf("Both roots are equal");
      x=-b/(2.0*a);
      printf("\nRoot is =%f ",x);
      }
      if(D>0){
        printf("Roots are real and distinct\n");
        x=((-b+sqrt(D))/(2.0*a));
        y=((-b-sqrt(D))/(2.0*a));
        printf("\n Roots are= %.2f and %.2f",x,y);

      }
    return 0;

}
