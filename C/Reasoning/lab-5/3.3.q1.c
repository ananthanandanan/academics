#include<stdio.h>
#include<limits.h>
/*@
	requires -10000000<=a<=10000000 && -10000000<=b<=10000000 
		&& -10000000<=b-a<=10000000 && -10000000<=a-b<=10000000;
	ensures \result>=0;
	behavior a_minimum:
		assumes a<b;
		ensures \result+a==b;
	behavior a_maximum:
		assumes b<=a;
		ensures \result+b==a;
	complete behaviors;
	disjoint behaviors;
*/
int distance(int a,int b){
	if(a<b) return b-a;
	else return a-b;
}
/*@
	requires \valid(a) && \valid_read(b) ;
	requires \separated(a, b) ;
	ensures *b==\old(*b);
	behavior reset_a:
		assumes *b!=0;
		ensures *a==0;
	behavior old_a:
		assumes *b==0;
		ensures *a==\old(*a);
	complete behaviors;
	disjoint behaviors;
*/
void reset_1st_if_2nd_is_true(int*a,int const*b){
	if(*b) *a=0;
}
/*@
	requires 0<month<=12;
	behavior tik:
		assumes month == 2;
		ensures \result==28;
	behavior tok:
		assumes month=={1,3,5,7,8,10,12};
		ensures \result==31;
	behavior tak:
		assumes month=={4,6,9,11};
		ensures \result==30;
	disjoint behaviors;
*/
int day_of(int month){
	int days[]={31,28,30,31,30,31,30,31,31,30,31,30,31};
	return days[month-1];
}
/*@
	requires \valid(a) && \valid(b);
	assigns *a,*b;
	behavior a_minimum:
		assumes *a<*b;
		ensures *a==\old(*b) && *b==\old(*a);
	behavior a_maximum:
		assumes *a>=*b;
		ensures *a==\old(*a) && *b==\old(*b);
	complete behaviors;
	disjoint behaviors;
*/
void max_ptr(int*a,int*b){
	if(*a<*b){
		int tmp=*b;
		*b=*a;
		*a=tmp;
	}
}

