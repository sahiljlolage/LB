// String & count letters

#include<stdio.h>
#include<string.h>

int strlenDigitsX(char *str)      //character pointer 
{

    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
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

    iRet = strlenDigitsX(Arr);

    printf("Numbers of digits are : %d\n",iRet);



    return 0;


}