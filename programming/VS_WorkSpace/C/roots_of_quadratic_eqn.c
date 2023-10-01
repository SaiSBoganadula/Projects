#include <stdio.h>
#include <math.h>
 int main(void)
 {
     int a,b,c;
     float x1,x2;
     printf("enter the coeffecient of x^2 : ");
     scanf("%d",&a);
     printf("enter the coeffecient of x : ");
     scanf("%d",&b);
     printf("enter the constant : ");
     scanf("%d",&c);
     x1=(-b+sqrt((b*b)-4*a*c))/2*a;
     x2=(-b-sqrt((b*b)-4*a*c))/2*a;
     printf("%.1f and %.1f are the roots of the given quadartic equation",x1,x2);
     return 0;

 }