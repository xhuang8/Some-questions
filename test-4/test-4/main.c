//
//  main.c
//  test-4
//
//  Created by XiaoQian Huang on 8/11/19.
//  Copyright © 2019 XiaoQian Huang. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int* getOneBits(int n, int* result_count){
    int base = 0;
    while(n>0){
        result_count[base++] = n%2;
        n = n/2;
    }
    for(int i = base - 1; i >= 0; i--)
    {
        printf("%d", result_count[i]);
    }
    printf("\n");
    int temp = base - 1;
    for(int i = 0; i < base; i++){
        if(result_count[i] == 1){
            printf("%d\n", +(i+1));
        }
        temp --;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int array[40];
    getOneBits(161, array);
    //printf("Hello, World!\n");
    return 0;
}
