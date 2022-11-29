#include<stdio.h>
void t(int y){
	if(y<18){
		printf("Oy kullanamazsiniz");
    }
    else{
    	printf("Oy kullanabilirsiniz");
	}
	
}
int main(){
	printf("lütfen yasinizi giriniz ");
	int y;
	scanf("%d",&y);
	t(y);
	
	return 0;
}