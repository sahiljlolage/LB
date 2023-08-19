// String 

#include<stdio.h>

int main()
{

    char Arr[10];   //static memory allocation

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s\n",Arr);


    return 0;


}