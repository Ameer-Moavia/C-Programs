//FA20-BSE-107
//AMEER MOAVIA
/* C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade.*/

#include<stdio.h>
#include<conio.h>

float main()
{
    float phy,chem,bio,math,comp,per;
    printf("Enter the Marks of Physics, Chemistry, Biology, Mathematics and Computer Respectively:\n");
    scanf ("%f%f%f%f%f",&phy,&chem,&bio,&math,&comp);
    per=(phy+chem+bio+math+comp)/5 ;


    if(per>=80)
    {
        printf("Grade Is 'A'\n    Excellent!");
    }
    else
    {
        if(per>=60)
            {
            printf("Grade Is 'B'\n  GOOD! ");
        }
       else
     {
        if(per>=40){
            printf("Grade Is 'C'\n  Average! Work hard");
        }


    else

        {
            printf("Grade is 'F'\n  Failed!Try AgaiN !");

        }
     }
    }
    printf("Percentage = %.2f ",per);
return 0;
     }
