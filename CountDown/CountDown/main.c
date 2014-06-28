//
//  main.c
//  CountDown
//
//  Created by bitsandatoms on 28/6/14.
//  Copyright (c) 2014 bitsandatoms. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int main(int argc, const char * argv[])
{

    // insert code here...
    printf("Where should I start counting? ");
    const char *val = readline(NULL);
    int num = atoi(val);
    for (int i = num; i>=0; i-= 3) {
        printf("%d\n",i);
        if (i%5 == 0){
            printf("Found one!\n");
        }
        
    }    return 0;
}

