//
//  main.c
//  test-5
//
//  Created by XiaoQian Huang on 8/16/19.
//  Copyright © 2019 XiaoQian Huang. All rights reserved.
//

//removing duplicates of an array and returning an array of only unique elements

#include <stdio.h>

int duplicateArray(int array[]){
    
    int a = sizeof(*array) / sizeof(int);
    
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if(array[i] == array[j])
            {
                array[i] = array[j];
            }
        }
    }
    return *array;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[100] = {1, 2, 3, 1, 2, 3, 4, 6};
    duplicateArray(arr);
    //printf("Hello, World!\n");
    return 0;
}
