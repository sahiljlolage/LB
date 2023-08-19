// String & count letters

#include<stdio.h>
#include<string.h>

int strlenSmallX(char *str)      //character pointer 
{

    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
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


    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenSmallX(Arr);

    printf("Length of string is : %d\n",iRet);



    return 0;


}