//Write a C program that simulates a simple calculator capable of performing basic arithmetic operations 

#include<stdio.h>
int main(){
    int a,b;
    char op;
    printf("Enter First number:");
    scanf("%d",&a);

    printf("Select operator(+,-,/,*):");
    scanf(" %c",&op);

    printf("Enter second number:");
    scanf("%d",&b);

    //Perform operations
    if(op == '+')
         printf("Result is = %d\n", a+b);

    else if(op == '-')
         printf("Result is = %d\n", a-b);

    else if(op == '*')
         printf("Result is = %d\n", a*b);

    else if(op == '/')
         printf("Result is = %d\n", a/b);
    
    else
        printf("Invalid operator!\n");
    return 0;
}