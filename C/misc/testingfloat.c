

#include <stdio.h>
int main() {
	double sec, h, m, s;
	printf("Input seconds: ");
	scanf("%lf", &sec);
	
	h = (sec/3600); 
	
	m = (sec -(3600*h))/60;
	
	s = (sec -(3600*h)-(m*60));
	
	printf(" %.2lf %.2lf %.2lf \n",h,m,s);
	printf("%lf %lf ", sec,(3600*h));
	
	return 0;
}