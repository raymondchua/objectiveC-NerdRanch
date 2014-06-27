//
//  main.c
//  Degrees
//
//  Created by bitsandatoms on 26/6/14.
//  Copyright (c) 2014 bitsandatoms. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//Declare a global variable
float lastTemperature;

float fahrenheitFromCelcius(float cel)
{
    lastTemperature = cel;
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celcius is %f Fahrenheit\n", cel, fahr);
    return fahr;
}

int main(int argc, const char * argv[])
{

    // insert code here...
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelcius(freezeInC);
    printf("Water freezes at %f degrees Fahrenheit.\n", freezeInF);
    printf("The last temperature converted was %f.\n", lastTemperature);
    return EXIT_SUCCESS;
}

