//
//  main.cpp
//  Test
//
//  Created by airbunny on 15/4/16.
//  Copyright (c) 2015年 airbunny. All rights reserved.
//

#include <stdio.h>
//#include “config.h”

void testfun(void)
{
    printf(“test\n”);
}

void main() 
{
    // insert code here...
    
    int a = 15;

    for(int i = 0;i < 100; i++)
    	a = a + 1;

    testfun();
}
