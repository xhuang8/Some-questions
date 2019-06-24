//
//  main.c
//  test1
//
//  Created by XiaoQian Huang on 6/23/19.
//  Copyright © 2019 XiaoQian Huang. All rights reserved.
//

//given an unsorted array of n elements, find if the element k is present in the array or not.

#include <stdio.h>

char* findNumber(int arr_count, int* arr, int k) {
    /*int i, j;
    scanf("%d", &arr_count);
    for (i=0; i< arr_count;  i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);*/
    
    //if is has already has main function, the below for loop should be changed with:
    //for (int j=0; j<arr_count; j++)
    //{
    //if(arr[j] == k)
    //return "YES";
    //}
    //return "NO";
    for(int j=0; j<arr_count; j++)
    {
        if(arr[j] == k)
            return "1";
    }
    return 0;
}

int main() {
    
    // insert code here...
    //printf("Hello, World!\n");
    //return 0;
    
    int m,n;
    
    scanf("%d", &m);
    int arr[m];
    for(int a=0; a<m; a++){
        scanf("%d", &arr[a]);
    }
    scanf("%d", &n);
    if(findNumber(m, arr, n))
        printf("YES/n");
    else
        printf("NO/n");
}


