// String  important  small to capital and vice versa 

#include<stdio.h>

void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;       // -32 gives capital 
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;       // 
        }
        str++;
    }

}

int main()
{
    char Arr[20];
    

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);

    printf("string after editing is : %s\n",Arr);
    
    return 0;
}

// time complexity n 