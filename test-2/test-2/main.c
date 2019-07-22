//
//  main.c
//  test-2
//
//  Created by XiaoQian Huang on 7/21/19.
//  Copyright © 2019 XiaoQian Huang. All rights reserved.
//


/*Given two integers, l and r, print all the odd numbers between l and r(l and r inclusive).
  The function must return an array of integers denoting the odd numbers between l and r.
  Input format: enter l and r (1<=l<=r<=10^5) */
#include <stdio.h>
#include <stdlib.h>

int* oddNumbers(int l, int r, int* result_count) {
   // *result_count = (r - l)/2 + 1;//calculate the array size;
    int *result;
    
    l += !(l % 2);//if l is even then start at l+=1
    r -= !(r % 2);//if r is even then start at r+=1
    
    *result_count = (r - l) / 2 + 1;//calculate the array size;
    result = malloc(*result_count * sizeof(*result));
    
    for(int i = 0; l <= r; ++i, l += 2){
        result[i]  = l;
    }
    
    return result;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    int min = 23, max = 68;
    int count;
    int *numbers = oddNumbers(min, max, &count);
    for(int i = 0; i < count; i++)
    {
        printf("%d \n", numbers[i]);
    }
    return 0;
}

// Complete the oddNumbers function below.

/*
 * To return the integer array from the function, you should:
 *     - Store the size of the array to be returned in the result_count variable
 *     - Allocate the array statically or dynamically
 *
 * For example,
 * int* return_integer_array_using_static_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     static int a[5] = {1, 2, 3, 4, 5};
 *
 *     return a;
 * }
 *
 * int* return_integer_array_using_dynamic_allocation(int* result_count) {
 *     *result_count = 5;
 *
 *     int *a = malloc(5 * sizeof(int));
 *
 *     for (int i = 0; i < 5; i++) {
 *         *(a + i) = i + 1;
 *     }
 *
 *     return a;
 * }
 *
 */
