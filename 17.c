#include <stdio.h>

int islem(sayi1,sayi2){
	int sayi3;
	sayi3=sayi1*sayi2+10;
	return sayi3;
}

int main() {
	int a;
	a=islem(12,5);
	printf("%d\n",a);
	return 0;
}