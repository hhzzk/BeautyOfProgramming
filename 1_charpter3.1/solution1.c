/*************************************************************************
    > File Name: solution1.c
    > Author: king
    > Mail: wangjinrui2013@gmail.com 
    > Created Time: 2015年03月09日 星期一 21时55分41秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>

void main()
{
    char src[] = "AABBCD";
    char dst[] = "CDAA";
    int i = 0;
    int j = 0;

    int len = strlen(src);
    for(i = 0; i < len; i++)
    {
        char temp = src[0];
        for(j = 0; j < len-1; j++)
        {
            src[j] = src[j+1];
        }
        src[len-1] = temp;
        
        if(strstr(src, dst) != NULL)
        {
            printf("src: %s\n", src);
            printf("True\n");
            return; 
        }
    }
    
    printf("False\n");
    return;
}
