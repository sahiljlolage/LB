/*
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
    int iRet = 0;

    printf("Enter the file that u want to open\n");
    scanf("%s",Filename);

    fd = open(Filename,O_RDONLY);

    iRet = read(fd,Arr,10);         // 10
    write(1,Arr,iRet);    // A 10 times 
    
    iRet = read(fd,Arr,10);         // 10
    write(1,Arr,iRet);    // B 10 times 

    iRet = read(fd,Arr,10);     //10
    write(1,Arr,iRet); 

    iRet = read(fd,Arr,10);     // 10
    write(1,Arr,iRet); 

    iRet = read(fd,Arr,10);     // 10
    write(1,Arr,iRet); 

    iRet = read(fd,Arr,10);     // 10
    write(1,Arr,iRet); 

    iRet = read(fd,Arr,10);     // 10
    write(1,Arr,iRet); 

    iRet = read(fd,Arr,10);     // 10
    write(1,Arr,iRet); 

    iRet = read(fd,Arr,10);     // 10
    write(1,Arr,iRet); 

    iRet = read(fd,Arr,5);      // 10
    write(1,Arr,iRet); 

    iRet = read(fd,Arr,5);      // 0 file contains nothing
    
    close(fd);

return 0;

}
