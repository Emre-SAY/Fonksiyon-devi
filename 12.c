#include<stdio.h>

void t(int x,y,z){
	if(x>y && x>z){
		printf("En buyuk sayi x tir");
	}
	else if(y>x && y>z){
		printf("En buyuk sayi y dir");	
	}
	else if(x==
	y && x==z){
		printf("syılar birbirine eşit");
	}
	else{
		printf("En buyuk sayi z dir");
	}
	
}
int main(){
	printf("x sayisini giriniz ");
	int x;
	scanf("%d",&x);
	printf("y sayisini giriniz ");
	int y;
	scanf("%d",&y);
	printf("z sayisini giriniz ");
	int z;
	scanf("%d",&z);
	t (x,y,z);
	
	return 0;
}