// String & return no. of whitespaces in string

#include<stdio.h>
#include<string.h>

int CountVowels(char *str)      //character pointer 
{

    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
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

    printf("Numbers of white spaces   are : %d\n",iRet);



    return 0;


}