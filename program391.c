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

*/


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>  
#include<stdlib.h>

int main()
{

    int fd = 0;

    fd = open("demo.txt",O_RDONLY);

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