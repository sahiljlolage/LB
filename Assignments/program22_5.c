///////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : write a program which accept string from user and display it in reverse order.
///////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

void Reverse(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {

        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;


    }
}


int main()
{
    char arr[20];

    printf("Enter string ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("%s",arr);

    return 0;
}