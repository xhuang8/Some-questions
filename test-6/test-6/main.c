//
//  main.c
//  test-6
//
//  Created by XiaoQian Huang on 4/19/20.
//  Copyright © 2020 XiaoQian Huang. All rights reserved.
//

/*Given a string, reverse each word in the sentence
 *"Welcome to JavaScript coding!"
 *Shall return
 *"emocleW ot tpirSavaJ !gnidoc"
 */

#include <stdio.h>
#include <string.h>

int main() {
    // insert code here...
   // printf("Hello, World!\n");
    
    int i, j = 0, k = 0, x, len;
        char str[100], str1[10][20], temp;
     
        printf("enter the string :");
        scanf("%[^\n]s", str);
     
    /* reads into 2d character array */
        for (i = 0;str[i] != '\0'; i++)
        {
            if (str[i] == ' ')
            {
                str1[k][j]='\0';
                k++;
                j=0;
            }
            else
            {
                str1[k][j]=str[i];
                j++;
            }
        }
        str1[k][j] = '\0';
     
    /* reverses each word of a given string */
        for (i = 0;i <= k;i++)
        {
            len = strlen(str1[i]);
            for (j = 0, x = len - 1;j < x;j++,x--)
            {
                temp = str1[i][j];
                str1[i][j] = str1[i][x];
                str1[i][x] = temp;
            }
        }
        for (i = 0;i <= k;i++)
        {
            printf("%s ", str1[i]);
        }
}
