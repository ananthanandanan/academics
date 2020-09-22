#include<stdio.h>
enum type1 {scalene,isoscele,equilateral};
enum type2 {right,acute,obtuse};
/*@
	requires a>=b &&a>=c;
	behavior eq:
		assumes a==b &&b==c;
		ensures \result==equilateral;
	behavior is:
		assumes a==b && b!=c|| b==c && c!=a|| c==a && a!=b;
		ensures \result==isoscele;
	behavior sc:
		assumes a!=b && b!=c && c!=a;
		ensures \result==scalene;
	complete behaviors;
	disjoint behaviors;
*/
enum type1 func1(int a,int b,int c){
	if(a==b && b==c) return equilateral;
	else if(a==b || b==c || c==a) return isoscele;
	else return scalene;
}
/*@
	requires a>=b>0 && a>=c>0 && a*a<=10000000 && c*c<=10000000 && b*b<=10000000;
	behavior ri:
		assumes a*a==b*b+c*c;
		ensures \result==right;
	behavior ac:
		assumes a*a<b*b+c*c;
		ensures \result==acute;
	behavior ob:
		assumes a*a>b*b+c*c;
		ensures \result==obtuse;
	complete behaviors;
	disjoint behaviors;
*/
enum type2 func2(int a,int b,int c){
	//since a is assumed as hypotenuse
	if(a*a==b*b+c*c) return right;
	else if (a*a<b*b+c*c) return acute;
	else return obtuse;
}


