//
//  main.c
//  Turkey
//
//  Created by bitsandatoms on 5/6/14.
//  Copyright (c) 2014 bitsandatoms. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    //Declare the var weight of type float
    float weight;
    
    //sore a number in that var
    weight = 14.2;
    
    //Log it to the user
    printf("The turkey weights %f.\n", weight);
    
    //declare another variable of type float
    float cookingTime;
    
    //calculate the cooking time and store it in the variable
    cookingTime = (15.0 + 15.0) * weight;
    
    //Log that to the user
    printf("Cook it for %f minutes.\n", cookingTime);
    
    return 0;
}

