/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : write a program which accept string from user reverse that string in place.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void StrRevX(char *str)
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
    
    printf("Enter the string ");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is %s",arr);

    return 0;

}