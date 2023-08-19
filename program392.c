/*
1. Open existing file 

int open(char *File_name,int Mode);

File_name : name of File that u want to open
Mode : mode in which u want to pen the file
O_RDONLY    Read mode
O_WRONLY    write mode
O_RDWR      Read + write mode

Return value : integer which indicates the index i.e File descriptor

Success : Return value >= 0 (Always starts from 3)
Failure : return value is -1.

2. Close the file 

void close(int fd)

fd : Its a return value of open system call 
    // absolute : complete path
*/


#include<stdio.h>
#include<fcntl.h>   // file control read write functions are there
#include<unistd.h>  // universal standard 
#include<stdlib.h>  

int main()
{

    int fd = 0;
    char Fname[30];

    printf("Enter the file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);  // File descriptor 

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened with FD %d\n",fd);
    }

    close(fd);

    return 0;
}