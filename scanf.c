#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age ;
   printf("Enter your age : ");
   scanf("%d",&age);/*"&" is an pointer*/
   printf("You are %d years old\n",age);

   double gpa;
       printf("Enter your gpa:");
       scanf("%lf",&gpa);/*"&" is an pointer*/
       printf("Your gpa is %f\n",gpa);

    char grade[5];
    printf(" Enter your grade :");
    scanf("%s",&grade); /*"&" is an pointer*/
    printf("Your grade is %s",grade);
    return 0;
}
