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
    char Arr[10];
    int iRet = 0;

    printf("Enter the file that u want to open\n");
    scanf("%s",Filename);

    fd = open(Filename,O_RDONLY);

    while(1)        // no condition
    {
        iRet = read(fd,Arr,10);         // 10
        if(iRet == 0)
        {
            break;
        }
        write(1,Arr,iRet);    // A 10 times 

    }
    close(fd);

return 0;

}
