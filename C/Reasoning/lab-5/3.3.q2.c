#include<stdio.h>
enum kind {vowel,consonent};
/*@
	requires c>='a' && c<='z';
	behavior vowel:
		assumes c=={'a','e','i','o','u'};
		ensures \result==vowel;
	behavior consonent:
		assumes c=={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
		ensures \result==consonent;
	disjoint behaviors;
*/
enum kind kind_of_letter(char c){
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
		return vowel;
	}
	else{
		return consonent;	
	}
}
/*@
	behavior q1:
		assumes x>=0 &&y>0;
		ensures \result==1;
	behavior q2:
		assumes x<0 &&y>=0;
		ensures \result==2;
	behavior q3:
		assumes x<=0 &&y<0;
		ensures \result==3;
	behavior q4:
		assumes x>0 &&y<=0;
		ensures \result==4;
	behavior q0:
		assumes x==0 &&y==0;
		ensures \result==0;
	complete behaviors;
*/
int quadrant(int x,int y){
	/*
	*Basically remember to check for the logical constrains of quadrants
	*/
	if(x>=0 && y>0) return 1;
	else if (x<0 && y>=0) return 2;
	else if (x<=0 && y<0) return 3;
	else if (x==0 && y==0) return 0;
	else return 4;
}

