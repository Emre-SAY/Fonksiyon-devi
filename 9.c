#include<stdio.h>
void f(int t,c){
		while(t<=9){
		printf("%d\n",t);
		t+=2;
	}
		while(c<=10){
		printf("%d\n",c);
		c+=2;
	}
	
}
int main(){
	int t,c;
	t=1;
	c=0;
	f(t,c);

	return 0;
}