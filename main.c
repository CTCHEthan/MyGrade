#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your letter grade.");

    char myGrade;
    scanf("%c", &myGrade );

    switch (myGrade)
    {
        case'A':
            printf("Great job!\n");
            break;
        case'B':
            printf("Okay job\n");
            break;
        case'F':
            printf("Try harder\n");
            break;
    }

    //printf("Hello world!\n");
    return 0;
}
