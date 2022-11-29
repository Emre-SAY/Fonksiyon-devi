#include<stdio.h>
void t(int m,n,tb){
	for(m=0; m<=tb; m++){
	 		for(n=0; n<m; n++){
	 			printf("#");
		}
		printf("\n");
	}
	
}
int main(){
	int m, n,tb;
	printf("Ucgen Taban Boyutu:");
	scanf("%d", &tb);	
	t(m,n,tb);
	
	 
return 0;
	 	
}

 