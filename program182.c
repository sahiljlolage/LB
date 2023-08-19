// String  important  small to capital and vice versa 

#include<stdio.h>

void struprX(char *str)
{
    int Gap = 'a' - 'A';
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - Gap;       // -32 gives capital 
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + Gap;       // 
        }
        str++;
    }

}

int main()
{
    char Arr[20];
    

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);

    printf("string after editing is : %s\n",Arr);
    
    return 0;
}

// time complexity n 