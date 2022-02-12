#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
     float r,d,circumference,area,pi=3.14;
    printf("ENTER RADIUS OF THE CIRCLE");
    scanf("%f,&r");
    d=r*2;
    circumference=2.0*pi*r;
    area=pi*r*r;
    printf("%f is the diameter of the circle\n ",d);
    printf("%f is the area of the circle\n",circumference);
    printf("%f is the area of the circle\n",area);
    return 0;
}
