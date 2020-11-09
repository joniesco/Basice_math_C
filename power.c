#include <stdio.h>
#include "myMath.h"
#define exp 2.71828

double Power(double x , int y){
	double ans=1;
	while(y>0 )
	{ ans*=x;
	y--;
	}
	while (y<0)
	{ ans*=(1/x);
	y++;
	}
	return ans;//in case y=0 ans will stay 1
	}
	
double Exponent(int x) {
	return Power(exp,x);
}

