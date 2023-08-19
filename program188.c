// String  important  using for

#include<stdio.h>

void strcpyrevX(char *src, char *dest)
{
    while(*src != '\0')
    {
        int iLength = 0;

        while (*src != '\0')
        {
            *src++;
            iLength++;
            
        }
        
        src--;

        for(;iLength != 0;iLength--)
        {
            *dest = *src;
            src--;
            dest++;

        }

        *dest = '\0';       
    }

}

int main()
{
    char Arr[20];
    char Brr[20];


    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strcpyrevX(Arr,Brr);

    printf("string after copy is : %s\n",Brr);
    
    return 0;
}

// time complexity n 