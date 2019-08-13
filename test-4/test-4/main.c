//
//  main.c
//  test-4
//
//  Created by XiaoQian Huang on 8/11/19.
//  Copyright © 2019 XiaoQian Huang. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#import <objc/runtime.h>

int* getOneBits(int n, int* result_count){
    int base = 0;
    int count = 0;
    int position = 0;
    int totalOneBits = 0;
    
    /*while(n>0){
        result_count[base++] = n%2;
        n = n/2;
    }*/
    
    for(int i = 0; n > 0; i++){
        base = base * 10;
        base = base + n%2;
        totalOneBits += n%2;
        n = n/2;
        count ++;
    }
    
   /* for(int i = 1; i <= count; i++)
    {
        printf("%d", result_count[i]);
    }
    printf("\n");
    int temp = base - 1;*/
    for(int i = 1; i <= count; i++){
        if(base%10 == 1){
            //printf("%d\n", +(i+1));
            position = position * 10;
            position = position + i;
        }
        base /= 10;
    }
    result_count = totalOneBits + position;
    return result_count;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int array[40];
    getOneBits(161, array);
    //printf("Hello, World!\n");
    return 0;
}
