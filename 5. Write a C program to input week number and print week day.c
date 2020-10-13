//FA20-BSE-107
//AMEER MOAVIA
/*C program to input week number and print week day.*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int day;
    printf("Enter The Day of Week(1-7):");
    scanf("%d",&day);

    switch(day)
    {
    case 1:
        printf("The Day is Monday");
        break;
    case 2:
         printf("The Day is Tuesday");
         break;
    case 3:
         printf("The Day is Wednesday");
         break;
    case 4:
         printf("The Day is Thursday");
         break;
    case 5:
         printf("The Day is Friday");
          break;
    case 6:
         printf("The Day is Saturday");
         break;
    case 7:
          printf("The Day is Sunday");
         break;
    default:
            printf("Invaild Day!!!");
    }
    return 0;
}
