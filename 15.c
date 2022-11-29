#include<stdio.h>

void ales(int ap, ydsp,mop){
	int ap2=ap*0.5;
int ydsp2=ydsp*0.25;
int mop2=mop*0.25;
int st=ap2+ydsp2+mop2;


if(st>=60)
{
    if(ydsp>=70) 
    {
        printf("Lisansüstü programa kabul edildiniz.");
    }

    else
    {
        printf("Lisansüstü programa kabul edilmediniz.");
    
    }
    
}

else
{
    printf("Lisansüstü programa kabul edilmediniz.");
}
	
}


int main()
{
    double ap, ydsp, mop;
    printf("Ales puanınız:");
    scanf("%lf", &ap);
    printf("YDS puanınız:");
    scanf("%lf", &ydsp);
    printf("Mezuniyet ortalamanız:");
    scanf("%lf", &mop);
    ales(ap,ydsp,mop);
    return 0;

}