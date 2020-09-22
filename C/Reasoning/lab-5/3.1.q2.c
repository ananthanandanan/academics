/*@
	requires -1000000000<a<1000000000;
	requires -1000000000<b<1000000000;
	ensures b==\result+a && b>a || b==a-\result && a>=b;	
*/
int distance(int a,int b){
	if(a < b)
		return b - a ;
	else
		return a - b ;
}

