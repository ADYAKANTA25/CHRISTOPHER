#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,rem;
    printf("ENTER A NUMBER -");
    scanf("%d",&n);
    rem=n%2;
    switch(rem)
    {
        case 0:
        printf("NUMBER is EVEN");
        break;
        case 1:
        printf("NUBER IS ODD");
        break;
        default:
        printf("IT IS NOT A NUMBER");
    }
    return 0;
}
