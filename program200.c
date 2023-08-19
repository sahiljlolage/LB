#include<stdio.h>

void strrevX(char *str)
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

    while(start < end)   // 100 < 104 address 
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
    char Arr[20];

    printf("Enter string : \n");
    scanf("%[^\n]s",Arr);    //contains whitespaces 
    
    strrevX(Arr);

    printf("Reverse string is : %s\n",Arr);

    return 0;
}


// n + (n / 2)
