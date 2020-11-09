#include <stdio.h>
#include "myMath.h"
int main () {
double x;
printf("%s\n","please insert a real number");
scanf("%lf",&x);
double f1= sub(add(Exponent((int) x), Power(x,3)), 2 );
double f2= add(mul(x,3),mul(Power(x,2),2));
double f3= sub(div(mul(Power(x,3),4),5),mul(x,2));
printf("the value of f(x)= e^x +x^3 -2 at the point %lf is : %.4f\n" , x, f1);
printf("the value of f(x)= 3x + 2x^2 at the point %lf is : %.4f\n" , x, f2);
printf("the value of f(x)= (4x^3)/5 - 2x at the point %lf is : %.4f\n" , x, f3);
}
