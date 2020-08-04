#include <stdio.h>

 /*int main() {
	float sec, h, m, s;
	printf("Input seconds: ");
	scanf("%.2f", &sec);
	
	h = (sec/3600); 
	
	m = (sec -(3600*h))/60;
	
	s = (sec -(3600*h)-(m*60));
	
	printf(" %.2f : %.2f : %.2f \n",h,m,s);
	
	return 0;
}*/

int mystery(int p, int q){
     int r;
     if ((r = p % q) == 0)
          return q; 
     else return mystery(q, r);
}

int main() {
	 int i = 0, j = 1, k = 2;

	 int res = mystery(7,91);
	 printf("%d",res);
	return 0;
}

