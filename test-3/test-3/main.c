//
//  main.c
//  test-3
//
//  Created by XiaoQian Huang on 8/9/19.
//  Copyright © 2019 XiaoQian Huang. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

/*
 * Complete the 'hex2dec' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING input_string as parameter.
 */

int hex2dec(char* input_string){
    int dec_num = 0;
    int length = (int)strlen(input_string);
    int n = 1;//base
    
    for(int i = length - 1; i >= 0; i--)
    {
        //when lines in the  0-9
        if(input_string[i] >= '0' &&  input_string[i] <= '9')
        {
            dec_num += (input_string[i] - 48) * n;
            //updated n for each time
            n *= 16;
        }
        //when lines in the A-F
        else if(input_string[i] >= 'A' && input_string[i] <= 'F')
        {
            dec_num += (input_string[i] - 55) * n;
            n *= 16;
        }
        //when lines in the a-f
        else if(input_string[i] >= 'a' && input_string[i] <= 'f')
        {
            dec_num += (input_string[i] - 87) * n;
            n *= 16;
        }
        else
        {
            return -1;
        }
        //i++;
    }
    return dec_num;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    char arr[ ] = "1AB";
    int value = 0;
    value = hex2dec(arr);
    printf("%d\n", value);
   // printf("Hello, World!\n");
    return 0;
}

/*int main()
 {
 FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");
 
 char* input_string = readline();
 
 int result = hex2dec(input_string);
 
 fprintf(fptr, "%d\n", result);
 
 fclose(fptr);
 
 return 0;
 }
 
 char* readline() {
 size_t alloc_length = 1024;
 size_t data_length = 0;
 
 char* data = malloc(alloc_length);
 
 while (true) {
 char* cursor = data + data_length;
 char* line = fgets(cursor, alloc_length - data_length, stdin);
 
 if (!line) {
 break;
 }
 
 data_length += strlen(cursor);
 
 if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
 break;
 }
 
 alloc_length <<= 1;
 
 data = realloc(data, alloc_length);
 
 if (!data) {
 data = '\0';
 
 break;
 }
 }
 
 if (data[data_length - 1] == '\n') {
 data[data_length - 1] = '\0';
 
 data = realloc(data, data_length);
 
 if (!data) {
 data = '\0';
 }
 } else {
 data = realloc(data, data_length + 1);
 
 if (!data) {
 data = '\0';
 } else {
 data[data_length] = '\0';
 }
 }
 
 return data;
 }*/
