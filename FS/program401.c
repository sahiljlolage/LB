/*
 delete the file 

 remove(char * Filename);
*/
#include<stdio.h>
#include<fcntl.h>   // file control read write functions are there
#include<unistd.h>  // universal standard 
#include<stdlib.h>  
#include<string.h>

int main()
{

    char Filename[50];

    printf("Enter the file that u want to delete\n");
    scanf("%s",Filename);

    remove(Filename);

return 0;

}
