#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("enter the first number-");
    scanf("%d,&a");
    printf("enter the second number");
    scanf("%d,&b");
    if(a>=b)
    printf("A IS GREATER THAN B-");
    else
    printf("b IS GREATER THAN a");
    return 0;
}
