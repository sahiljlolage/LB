// String replace whitespace with _ :- string edting

#include<stdio.h>

void EditString(char *str)
{
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            *str = '_';  
        }
        str++;
    }

}

int main()
{
    char Arr[20];
    

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    EditString(Arr);

    printf("string after editing is : %s\n",Arr);
    
    return 0;
}

// time complexity n 