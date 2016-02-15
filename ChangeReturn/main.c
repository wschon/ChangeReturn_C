//
//  main.c
//  ChangeReturn
//
//  Created by Wesley on 2/12/16.
//  Copyright © 2016 Wesley. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float price;
    float given;
    printf("Input Price (USD):\n");
    scanf("%f", &price);
    printf("Amount Given (USD):\n");
    scanf("%f", &given);
    printf("Change:\n");
    if (given < price) {
        printf("Not enough money given.\n");
        return 0;
    }
    if (given == price) {
        printf("No change.\n");
    }
    if (given > price) {
        float diff = given - price;
        
        //how many hundreds
        int hundreds = (int)diff;
        hundreds = hundreds / 100;
        printf("%d hundreds, ", hundreds);
        diff = diff - (float)(hundreds*100);
        
        //how many twenties
        int twenties = (int)diff;
        twenties = twenties / 20;
        printf("%d twenties, ", twenties);
        diff = diff - (float)(twenties*20);
        
        //how many tens
        int tens = (int)diff;
        tens = tens / 10;
        printf("%d tens, ", tens);
        diff = diff - (float)(tens*10);
        
        //how many fives
        int fives = (int)diff;
        fives = fives / 5;
        printf("%d fives, ", fives);
        diff = diff - (float)(5*fives);
        
        //how many ones
        int ones = (int)diff;
        printf("%d ones, ", ones);
        diff = diff - (float)(ones);
        
        //etc etc...
        int quarters = (int)(diff / 0.25f);
        printf("%d quarters, ", quarters);
        diff = diff - (quarters*0.25f);
        
        int dimes = (int)(diff / 0.10f);
        printf("%d dimes, ", dimes);
        diff = diff - (dimes*0.10f);
        
        int nickels = (int)(diff / 0.05f);
        printf("%d nickels, ", nickels);
        diff = diff - (nickels*0.05f);
        
        int pennies = (int)(diff / 0.01f);
        printf("%d pennies, ", pennies);
        printf("\n");
        
    }
    return 0;
}
