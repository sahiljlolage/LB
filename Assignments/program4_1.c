///////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Write a program which accepts name from user and print that name.
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char Name[30];
    printf("Please enter full name");
    scanf("%[^\n]%*c",Name);
    printf("Your name is %s",Name);
    return 0;

}