//Write a program in C to check whether a number is positive or negative 

#include<stdio.h>

int main()
{
    double num;
    printf("Enter the Number:");
    scanf("%d", &num);

    if(num < 0) {
        printf("You Enter Positive  number.\n");
    }
    else if(num > 0) {
        printf("You Enter the Negative Number.\n");
    }
return 0;
}