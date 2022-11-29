#include<stdio.h>
void t(int g){
		if(g%10==0 && g%5==0 ){
		printf("%d sayisi 5 ve 10 un katidir",g);
	}
	else if(g%10!=0 && g%5==0 ){
		printf("%d sayisi 5 in katidir 10 un kati değildir",g);
	}
	else{
		printf("%d sayisi 5 ve 10 un kati degildir");
	}
}
int main(){
	int g;
	printf("bir sayi giriniz\n");
	scanf("%d",&g);
	t(g);

	return 0;
}