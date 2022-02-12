#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    char ch;
    printf("ENTER 1ST NUMBER-");
    scanf("%d",&a);
    printf("ENTER 2ND NUMBER-");
    scanf("%d",&b);
    printf("ENTER YOUR CHOICE-");
    scanf("%c",&ch);
    switch(ch)
    {
     case '+':
     printf("%d is the sum of two numbers",a+b);
     break;
     case '-':
     printf("%d is subtraction of two numbers",a-b);
     break;
     case '*':
     printf("%d is the multiplication of two numbers",a*b);
     break;
     case '%':
     printf("%d is the remainder of two numbers",a%b);
     break;
     case'/':
     printf("%d is the quotient of two numbers",a/b);
     break;
     default:
     printf("invalid operator");
    }



    return 0;
}
