#include <stdio.h>
#include <math.h> // pow() fonksiyonu kullanabilmek için gerekli olan kütüphane

int main()
{
    double taban, kuvvet, sonuc;
    
    /* Kullanicidan iki sayi al*/
    printf("Taban degerini giriniz: ");
    scanf("%lf", &taban);                // long veri tipinde %lf alinir
    printf("Kuvvet degerini giriniz: ");
    scanf("%lf", &kuvvet);
    
    /* taban ^ kuvvet degerini hesapla*/
    sonuc = pow(taban, kuvvet);
    
    printf("%.2lf ^ %.2lf = %.2lf\n", taban, kuvvet, sonuc);
    
    return 0;
}

