/*@ requires -2147483648<a+b<2147483647;
ensures \result==a+b;

*/
int add(int a,int b){
	return a+b ;
}
