#include <stdio.h>

int main() {
	float sec, h, m, s;
	printf("Input seconds: ");
	scanf("%.2f", &sec);
	
	h = (sec/3600); 
	
	m = (sec -(3600*h))/60;
	
	s = (sec -(3600*h)-(m*60));
	
	printf(" %.2f : %.2f : %.2f \n",h,m,s);
	
	return 0;
}