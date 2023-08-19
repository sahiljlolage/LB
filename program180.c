// String  important  small to capital and vice versa 

#include<stdio.h>

void strUprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;       // 32 gives capital 
        }
        str++;
    }

}

int main()
{
    char Arr[20];
    

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strUprX(Arr);

    printf("string after editing is : %s\n",Arr);
    
    return 0;
}

// time complexity n 