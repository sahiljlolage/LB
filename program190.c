// String  important append  with space 

#include<stdio.h>

//step 1 : travel till end of dest 
// 2 : copy the data from src to dest
// 3 : write '\0' at the end of dest

void strcatX(char *src, char *dest)
{
    //step 1 : travel till end of dest
    while(*dest != '\0')
    {
        dest++;
    }

    *dest = ' ';
    dest++;

    // 2 : copy the data from src to dest

    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;

    }

    // 3 : write '\0' at the end of dest

    *dest = '\0';

}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";  //initialization


    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    strcatX(Arr,Brr);

    printf("string after copy is : %s\n",Brr);
    
    return 0;
}

// time complexity n 