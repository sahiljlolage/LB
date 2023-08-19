///////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Accept division of student from user and depends on the division
// display exam timing. There are 4 divisions in school as A,B,C,D.Exam of division
// A at 7 AM, B at 8:30 AM, C at 9:20 AM and D at 10:30 AM.
// (Application should be case insensitive).
///////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    int iCount = 0;

            if(chDiv == 'a' || chDiv == 'A')
            {
                printf("Your exam at 7 AM");
            }
            else if(chDiv == 'b' || chDiv == 'B')
            {
                printf("Your exam at 8:30 AM");
            }
            else if(chDiv == 'c' || chDiv == 'C')
            {
                printf("Your exam at 9:20 AM");
            }
            else if(chDiv == 'd' || chDiv == 'D')
            {
                printf("Your exam at 10:30 AM");
            }

}


int main()
{
    char cValue = '\0';

    printf("Enter your division ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;

}