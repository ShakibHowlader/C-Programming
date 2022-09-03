#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade[5];
    printf(" Enter your grade :");
    scanf("%s",&grade); /*"&" is an pointer*/
    printf("Your grade is %s",grade);
    return 0;
}
