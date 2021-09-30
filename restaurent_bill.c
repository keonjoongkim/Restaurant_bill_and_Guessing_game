/* A program that computes the tax and tip on a restaurant bill for a patron. */

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main(int argc, char* argv[])
{
  float tax;
  float tip;
  int random; 

  float salad_price = 9.95;
  float soup_price = 4.55;
  float sandwich_price = 13.25;
  float pizza_price = 22.35;

  float tax_amount, tip_amount, total_amount; 

  tax = atof(argv[1]);
  tip = atof(argv[2]);

  srand(time(NULL));  
  random = rand()%4;

  switch (random)
   {
       case 0: printf("Food name : Salad\n");
               printf("meal cost : $ %f \n", salad_price);

               tax_amount = (salad_price * tax)/100;
               printf("Tax amount : $%f\n", tax_amount);

               tip_amount = (salad_price * tip)/100;
               printf("Tip amount : $%f\n", tip_amount);
               
               total_amount = (salad_price + tax_amount + tip_amount);
               printf("Total amount : $%f\n", total_amount);
               break;

       case 1: printf("Food name : Soup\n");
               printf("meal cost : $ %f \n", soup_price);

               tax_amount = (soup_price * tax)/100;
               printf("Tax amount : $%f\n", tax_amount);

               tip_amount = (soup_price * tip)/100;
               printf("Tip amount : $%f\n", tip_amount);
               
               total_amount = (soup_price + tax_amount + tip_amount);
               printf("Total amount : $%f\n", total_amount);
               break;

       case 2: printf("Food name : Sandwich\n");
               printf("meal cost : $ %f \n", sandwich_price);

               tax_amount = (sandwich_price * tax)/100;
               printf("Tax amount : $%f\n", tax_amount);

               tip_amount = (sandwich_price * tip)/100;
               printf("Tip amount : $%f\n", tip_amount);
               
               total_amount = (sandwich_price + tax_amount + tip_amount);
               printf("Total amount : $%f\n", total_amount);
               break;

       case 3: printf("Food name : Pizza\n");
               printf("meal cost : $ %f \n", pizza_price);

               tax_amount = (pizza_price * tax)/100;
               printf("Tax amount : $%f\n", tax_amount);

               tip_amount = (pizza_price * tip)/100;
               printf("Tip amount : $%f\n", tip_amount);
               
               total_amount = (pizza_price + tax_amount + tip_amount);
               printf("Total amount : $%f\n", total_amount);
               break; 
   }

  return 0;
}