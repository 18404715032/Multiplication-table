//
//  main.cpp
//  Multiplication table
//
//  Created by 杨浩 on 15/11/25.
//  Copyright © 2015年 杨浩. All rights reserved.
//

#include <iostream>
int main(int argc, const char * argv[])
{
    // insert code here...
    int i,j,result;
    printf("\n");
    for(i=1;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
            result=i*j;
            printf("%d*%d=%-3d",i,j,result);
        }
        printf("\n");
    }
    
   
    return 0;
}
