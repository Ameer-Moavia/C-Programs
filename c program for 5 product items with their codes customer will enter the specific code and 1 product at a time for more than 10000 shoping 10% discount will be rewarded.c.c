//AMEER MOAVIA
//FA20-BSE-107
/* C PROGRAM TO DISPLAY 5 ITEMS WITH THEIR PRODUCT NUMBER AND NAMES AND RATE WITH 10% DISCOUNT FOR MORE THAN RS.10000 SHOPING*/
#include<stdio.h>
 int main()      /*Main Function Begins Program Execution*/
 {
int prodt,n;                  /*Initialize*/
float tot,disc,discount;
 printf("Enter the Product(enter the specific code of product):\n2000.Shampoo\tPrice=Rs.1200\n2001.Soap\tPrice=Rs.1100\n2002.Cattle\tPrice=Rs.2500\n2003.Iron\tPrice=Rs.2600\n2004.Power Bank\tPrice=Rs.3500 \n");
 scanf("%d",&prodt);
 if(prodt>2004||prodt<2000) /*Product Code Lies Between 2000 to 2004 */
 {
     printf("Invaild Product!!");   /*Invaild Code */
 }
 else
 printf("Enter the Quantity of product:\n"); /*Get Quantity From User*/
 scanf("%d",&n);
 if(n<=0)
 {
     printf("Invaild Quantity!!!");    /* Negative or Zero Quantity*/
 }
 else if(prodt==2000)                  /*Nested If Else Statments Program Exucute According To The Customer Product Code*/
    {
        tot=1200*n;
    printf("Total Price of Shampo/s= %.2f",tot);
    }
 else
 {
     if( prodt==2001)
     {
         tot=1100*n;
         printf("Total Price of Soap/s =Rs.%.2f ",tot);
     }
     else
     {
         if(prodt==2002)
         {
             tot=2500*n;
             printf("Total Price Of Cattle/s =Rs.%.2f",tot);
         }
         else
         {
             if(prodt==2003)
             {
                 tot=2600*n;
                 printf("Total Price of Iron/s=Rs.%.2f ",tot);
             }
             else
             {
            if(prodt==2004)
                {
                tot=3500*n;
                printf("Total Price OF Power Bank/s =Rs.%.2f",tot);
            }
}
         }
     }
 }
   if(tot>10000)          /* If Total Price Is Greater Than 10000 Than 10% Discount Will Given to the customer */
    {
     discount=(tot*10)/100;
     printf("\nEnjoy 10 percent  Discount =Rs.%.2f",discount);
     disc=(tot-((tot*10)/100));
    printf("\nTotal Price after 10 Percent Discount =Rs.%.2f\n    THANKS  FOR CHOOSING MOAVIA SUPER STORE!!!",disc);
    }
    else
    {
        if(tot<10000)
            {
                printf("\n  THANKS FOR CHOOSING MOAVIA SUPER STORE!!!\n\n\n\n");
            }
    }
 return 0; /* Means Program Execution Ended*/
 }
