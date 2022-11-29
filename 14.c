#include <stdio.h>
int fak(int); 
void main()
{
int sayi;
 printf("Pozitif bir tam sayi giriniz:");
 scanf("%d", &sayi);
 printf("Sayinin faktoriyeli: %d\n", fakt(sayi));
}
int fak(int i)
{ int a, b = 1;
for(a = i; a >= 1; a--)
b = b*a;
return 0;
}