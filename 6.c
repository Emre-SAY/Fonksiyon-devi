#include <stdio.h>
void ortalama(int t, int ogrenciSayisi, int ort, int puan){
        printf("Notu giriniz(sonlandırmak için -1):");
    scanf("%d", &puan);
    while(puan!=-1){
        toplam=toplam+not;
        ogrenciSayisi=ogrenciSayisi+1;
        printf("Puaninizi giriniz (sonlandırmak için -1):");
        scanf("%d", &puan);
    }
    if(ogrenciSayisi!=0){
    ort=t/ogrenciSayisi;
    printf("\n\nOrtalama: %.2f \n", ort);
    }
}
int main()
{
    long t=0;
    int ogrenciSayisi=0, puan;
    float ort;
    ort=t/ogrenciSayisi;
}