#include<stdio.h>
void t(double boy,kilo,ind){
	if(ind<18)
printf("Zayıf");
else if(ind>=18 && ind<25)
printf("Normal");
else if(ind>=25 && ind<30)
printf("Kilolu");
	
}
int main()
{
double boy, kilo, ind;

printf("Kilonuz:");
scanf("%lf", &kilo);
printf("Boyunuz:");
scanf("%lf", &boy);

ind=kilo/(boy*boy);
printf("Vücut Kitle İndeksinz: %f \n", ind);
t(boy,kilo,ind);


 return 0;
 
}