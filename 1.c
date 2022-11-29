#include<stdio.h>
void t(int a){
	if(a%2 == 0){
		printf("%d sayisi cifttir",a);
	}
	else{
		printf("%d sayisi tektir",a);
	}
	
}
int main(){
	printf("Bir sayi giriniz ");
	int a;
	scanf("%d",&a);
	t(a);
	
	return 0;
}