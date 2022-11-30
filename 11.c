#include <stdio.h>
void t(int a,int b,int sayi,int yz,int sc){
	yz = 1;
	sc = sayi -1;
	
	for (b = 0; b < sayi; b++){
		for (a = 0; a < sc; a++){
			printf(" ");
		}
		for (a = 0; a < yz; a++){
			printf("*");
		}
		printf("\n");
		sc--;
		yz+=2;
	}
}
int main(){
	int a, b, sayi;
	int yz, sc;
	printf("(Ucgen Taban Boyutu)/2=");
	scanf("%d", &sayi);
	t(a,b,sayi,yz,sc);
	
	
	return 0;

	
}