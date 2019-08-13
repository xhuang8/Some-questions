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
    int index =  0;
    //int count =  0;
    //int res = 0;
    int count1 = 0;
    
    while(n>0){
        result_count[index++] = n%2;
        if(n%2 == 1)
            count1++;
        n = n/2;
        
    }
    printf("%d\n", count1);
    
     for(int i = index -1; i >= 0; i--)
    {
        printf("%d", result_count[i]);
    }
    printf("\n");
    //binary
    
    int temp = index - 1;
    
    for(int i = 0; i < index; i++){
       if(result_count[temp] == 1)
       {
           //count++;
           printf("%d\n", i+1);
       }
        temp--;
    }
    //printf("%d\n", count);
    
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int array[40];
    getOneBits(161, array);
    //printf("Hello, World!\n");
    return 0;
}
