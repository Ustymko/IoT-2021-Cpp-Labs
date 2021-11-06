#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>
void main(void)
{
    float x = 2.361;
    float y = 1.149;
    printf("%f",13*x*y+log(x/y)-17*sin(pow(x*180/M_PI,2)-y*180/M_PI));
}