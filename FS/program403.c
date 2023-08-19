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
    int fd = 0;
    char Arr[10];


    printf("Enter the file that u want to open\n");
    scanf("%s",Filename);

    fd = open(Filename,O_RDONLY);

    read(fd,Arr,10);
    write(1,Arr,10);    // A 10 times 
    
    read(fd,Arr,10);
    write(1,Arr,10);    // A 10 times 

    close(fd);

return 0;

}
