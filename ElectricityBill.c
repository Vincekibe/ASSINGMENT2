//calculating electricity bill
/*NAME:VINCENT KIBET KIPYEGON
REG:CT101/G/24767/24 */


#include <stdio.h>

int main(){
   int CustomerID, UnitsConsumed;
   char CustomerName;

   printf("Enter the CustomerID:\n");
   scanf("%d", &CustomerID);
   printf("Enter the CustomerName:\n");
   scanf("%s", &CustomerName);
   printf("Enter the UnitsConsumed:\n");
   scanf("%d", &UnitsConsumed);
   float totalbill;
   if(UnitsConsumed<=199){
    totalbill=UnitsConsumed*1.20;
    printf("The totalbill is %f\n", totalbill);
   }
   else if(UnitsConsumed>=200 && UnitsConsumed<400){
    totalbill=UnitsConsumed*1.50;
    printf("The totalbill is %f\n", totalbill);
   }
   else if(UnitsConsumed>=400 && UnitsConsumed<600){
    totalbill=UnitsConsumed*1.80;
    printf("The totalbill is %f\n", totalbill);
   }
   else if(UnitsConsumed>=600){
    totalbill=UnitsConsumed*2.00;
    printf("The totalbill is %f\n", totalbill);
   }
   float Surcharge;
   if(totalbill>=400){
    Surcharge=totalbill*0.15;
    printf("The Surcharge is %f\n", Surcharge);
   }
   if(totalbill>=100){
   }
  printf("\nThe customer ID is %d", CustomerID);
  printf("\nThe Customer name is %s", &CustomerName);
  printf("\nThe Units Consumed is %d", UnitsConsumed);
  printf("\nThe totalbill is %f", totalbill);

return 0;
}
