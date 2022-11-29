#include<stdio.h>
void t(int a){
		a++;
	printf("sonuc %d",a);
}
int main(){
	int a;
	printf("bir a sayısı giriniz\n");
	scanf("%d",&a);
	t(a);
	return 0;
}
