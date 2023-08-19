/*
will read any size of the file 
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
    char Arr[100];      // will increase the execution of file to read by allocating the size 100
    int iRet = 0;

    printf("Enter the file that u want to open\n");
    scanf("%s",Filename);

    fd = open(Filename,O_RDONLY);

    while(1)        // no condition
    {
        iRet = read(fd,Arr,sizeof(Arr));         // 10
        if(iRet == 0)
        {
            break;
        }
        write(1,Arr,iRet);    // A 10 times 

    }
    close(fd);

return 0;

}
