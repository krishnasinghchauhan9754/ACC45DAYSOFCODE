#include <stdio.h>
int main() {

   float price;
   float discount_percentage;
   float discount_amount;
   float discounted_price;
 

    printf("C Program to Calculate Discount Amount :  ");

    printf(" Enter Price of Item: ");
    scanf("%f", &price);
    
   
    printf("Enter Discount Percentage on Item  : ");
    scanf("%f", &discount_percentage);
    
    
    discount_amount = (discount_percentage*price)/100;
    
    discounted_price = (price-discount_amount);
  
    
    printf("Discount amount : %f",  discount_amount);
    printf("Discounted price : %f",  discounted_price);

    return 0;
}