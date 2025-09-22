// CODE OWNER - Aarish Naiyer
// STUDENT ID - 1853182
// Lab 2

#include <stdio.h>
int main(){


// Stocks stuff
    
    float instock_apples=7.2;
    float instock_carrots=4.1;
    int instock_chips=9;
    int instock_candy=3;    
    float weight_of_apples=0.0;
    float weight_of_carrots=0.0;
    int no_of_chips=0;
    int no_of_candies=0;

//buying stuff and prices

        printf("%-11s(%4.2f  kg) : ", "Apples", 7.20);
        scanf("%f", &weight_of_apples);

        if (weight_of_apples>instock_apples)
            {return 1;}
        else {instock_apples-=weight_of_apples;}



        printf("%-11s(%4.2f  kg) : ", "Carrots", 4.10);
        scanf("%f", &weight_of_carrots);

        if (weight_of_carrots>instock_carrots)
            {return 1;}
        else {instock_carrots-=weight_of_carrots;}


        printf("%-11s(%d  units) : ", "Chips", 9);
        scanf("%d", &no_of_chips);

        if (no_of_chips>instock_chips)
            {return 1;}
        else {instock_chips-=no_of_chips;}



        printf("%-11s(%d  units) : ", "Candy", 3);
        scanf("%d", &no_of_candies);

        if (no_of_candies>instock_candy)
            {return 1;}
        else {instock_candy-=no_of_candies;}

        


    
// Check validity 
    
    if (weight_of_apples == 0 &&
        weight_of_carrots== 0 &&
        no_of_chips     ==  0 &&
        no_of_candies   ==  0)
        
    {return 0;}

    
// Promos
    int promo1=0;
    int promo2=0;
    
    if (no_of_chips>=2){promo1+=1;}

    if (weight_of_apples >= 1.0 && 
        weight_of_carrots >= 1.0 &&
        no_of_candies >= 1 &&
        no_of_chips >= 1)
        {promo2=1;}


    
// bill
    float Cost_of_apples=weight_of_apples*5.99;
    float Cost_of_carrots=weight_of_carrots*3.99;
    float Cost_of_chips=no_of_chips*2.99;
    float Cost_of_candy=no_of_candies*1.50;
    float discount_if_promo1=0.75;
    float bill=0.0;
    float final_bill;
    float discount=0.0;
    
    if (promo1 && promo2){
    bill = Cost_of_apples + Cost_of_carrots + Cost_of_chips + Cost_of_candy/2; 
    final_bill=bill*0.9;
    discount=bill-final_bill;}

    else if (promo2 && ! promo1){
        bill = Cost_of_apples + Cost_of_carrots + Cost_of_chips + Cost_of_candy; 
        final_bill=bill*0.9;
        discount=bill-final_bill;
    }
    
    else if (promo1 && ! promo2){
    
    bill = Cost_of_apples + Cost_of_carrots + Cost_of_chips + Cost_of_candy; 
    final_bill = Cost_of_apples + Cost_of_carrots + Cost_of_chips + Cost_of_candy/2;
    if (no_of_candies!=0){discount= bill - final_bill;}
 
    }
    else{
    bill = Cost_of_apples + Cost_of_carrots + Cost_of_chips + Cost_of_candy; 
    final_bill=bill;
    }

    printf("\n");

   float tax = final_bill*0.05;
    
    printf("-------------------------------------------------------------------\n");
    printf("| %-8s | %-12s | %-10s | %-11s | %-10s |\n", "Item", "Quantity", "Cost", "Discount", "Total");
    if (weight_of_apples!=0){
    printf("| %-8s | %-9.2f kg | $%9.2f | -$%9.2f | $%9.2f |\n","Apples",weight_of_apples,Cost_of_apples,0.0,Cost_of_apples);}

    if (weight_of_carrots!=0){
    printf("| %-8s | %-9.2f kg | $%9.2f | -$%9.2f | $%9.2f |\n","Carrots",weight_of_carrots,Cost_of_carrots,0.0,Cost_of_carrots);}

    if (no_of_chips!=0){
    printf("| %-8s | %-9d    | $%9.2f | -$%9.2f | $%9.2f |\n","Chips",no_of_chips,Cost_of_chips,0.0,Cost_of_chips);}

    if (promo1 && no_of_candies!=0){
    printf("| %-8s | %-9d    | $%9.2f | -$%9.2f | $%9.2f |\n","Candy",no_of_candies,Cost_of_candy,discount_if_promo1*no_of_candies,no_of_candies*discount_if_promo1);}
    
    else if (no_of_candies!=0){printf("| %-8s | %-9d    | $%9.2f | -$%9.2f | $%9.2f |\n","Candy",no_of_candies,Cost_of_candy,0.0,Cost_of_candy);}
    printf("-------------------------------------------------------------------\n");



    printf("\n");
    if (discount!=0){printf("%-16s: $%.2f - $%.2f = $%.2f\n","Subtotal", bill, discount, bill-discount);}
    		else{printf("%-16s: $%.2f\n","Subtotal", final_bill);}
        	     printf("%-16s: $%.2f\n","Tax (5%)", tax);

    
    printf("----------------------------------------------------\n");

    		     printf("%-16s: $%.2f\n","Total", final_bill+tax);






return 0;


}
