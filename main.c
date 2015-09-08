//
//  main.cpp
//  Test
//
//  Created by airbunny on 15/4/16.
//  Copyright (c) 2015年 airbunny. All rights reserved.
//
#include<stdio.h>
#include"config.h"

void fTest()
{
    printf("what's now?\n");
    
}

int main()
{
    float fA;
    int nA = 1;
    
    fA = fPID(3);
    
    printf("res=%f\n\n",fA);
    
    fMotortest();
    
    fTest();
    
    while(nA)
    {
        printf("input:");
        scanf("%d",&nA);
        
        printf("input is:%d\n\n",nA);
        
    }
    
    getchar();
    
    return 0;
    
}