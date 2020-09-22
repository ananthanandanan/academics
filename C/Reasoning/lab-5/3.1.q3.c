/*@
	ensures (('a'<=c && c<='z') || ('A'<=c && c<='Z')) ==> \result==1;
	ensures !(('a'<=c && c<='z') || ('A'<=c && c<='Z'))==> \result==0;
*/
int alphabet_letter(char c){
	if( ('a'<= c && c <='z') || ('A' <= c && c <='Z') ) return 1;
	else return 0;
}
int main(){
	int ch ;
	ch = alphabet_letter('x') ;
	//@ assert ch==1 ;
	ch = alphabet_letter('H') ;
	//@ assert ch==1 ;
	ch = alphabet_letter(' ') ;
	//@ assert !ch ;
}
