//FA20-BSE-107
//AMEER MOAVIA
/* C program to create Simple Calculator using switch case.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,choice;
    printf("Enter your choice\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);
    if((choice>4) || (choice==0))
    {
        printf("Invaild Choice\n");
        }
        else{
            printf("Please Enter 2 Integers\n");
            scanf("%d\n%d",&a,&b);
        }
    switch(choice)
    {
        case 1:
          printf("%d + %d=%d",a,b,(a+b));
          break;
        case 2:
          printf("%d - %d=%d",a,b,(a-b));
          break;
        case 3:
          printf("%d x %d=%d",a,b,(a*b));
          break;
        case 4:
            if(b!=0){
          printf("%d/%d=%d",a,b,(a/b));
            }
            else{
                printf("0 is not Divisible");
            }
          break;
          default:
               printf("wrong Choice!!!");


        }

  return 0;

    }
