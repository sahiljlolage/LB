// String & return vowels count

#include<stdio.h>
#include<string.h>

// Vowels : a   e   i       o   u A E   I   O   U
int CountVowels(char *str)      //character pointer 
{

    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == 'A'|| *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {   
            iCount++;
            
        }
        str++;
        
    }
    return iCount;
    
}

int main()
{

    char Arr[10];   //static memory allocation
    int iRet = 0;


    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountVowels(Arr);

    printf("Numbers of Vowels  are : %d\n",iRet);



    return 0;


}