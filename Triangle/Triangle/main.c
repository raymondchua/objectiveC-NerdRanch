//
//  main.c
//  Triangle
//
//  Created by bitsandatoms on 26/6/14.
//  Copyright (c) 2014 bitsandatoms. All rights reserved.
//

#include <stdio.h>
float remainingAngle(float a, float b){
    return 180 - a - b;
}

int main(int argc, const char * argv[])
{

    // insert code here...
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n",angleC);
    return 0;
}

