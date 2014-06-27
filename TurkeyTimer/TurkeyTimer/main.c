//
//  main.c
//  TurkeyTimer
//
//  Created by bitsandatoms on 5/6/14.
//  Copyright (c) 2014 bitsandatoms. All rights reserved.
//

#include <stdio.h>

void showCookTimeForTurkey(int pounds){
    int necessaryMins = 15 + 15 * pounds;
    printf("Cook for %d minutes.\n",necessaryMins);
}

int main(int argc, const char * argv[])
{

    // insert code here...
    int totalWeight = 10;
    int glibetsWeight = 1;
    int turkeyWeight = totalWeight - glibetsWeight;
    showCookTimeForTurkey(turkeyWeight);
    return 0;
}

