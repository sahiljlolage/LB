/*
will read any size of the file 
*/
#include<stdio.h>
#include<fcntl.h>   // file control read write functions are there
#include<unistd.h>  // universal standard 
#include<stdlib.h>  
#include<string.h>

#define BUFFERSIZE 1024     // user defined macro

int main()
{

    char Filename[50];
    int fdRead = 0;
    int fdWrite = 0;
    char Arr[BUFFERSIZE];      // will increase the execution of file to read by allocating the size 100
    int iRet = 0;

    printf("Enter the file that u want to open\n");
    scanf("%s",Filename);

    fdRead = open(Filename,O_RDONLY);

    printf("Enter the file name that u want to create\n");
    scanf("%s",Filename);

    fdWrite = creat(Filename,0777);


    while(1)        // no condition
    {
        iRet = read(fdRead,Arr,sizeof(Arr));         // 10
        if(iRet == 0)
        {
            break;
        }
        write(fdWrite,Arr,iRet);    // A 10 times 

    }
    printf("File copy is Successfull\n");

    close(fdRead);

return 0;

}
