#include <stdio.h>
#include <math.h>  // sqrt() fonksiyonunu kullanabilmek için

int main()
{
	double sayi, karekok;
	/* Kullanicidan sayi degeri al*/
	printf("Karekoku alinacak sayiyi giriniz: ");
	scanf("%lf", &sayi);
	
	/* Sayinin karekokunu hesapla*/
	karekok = sqrt(sayi);
	
	/* Sonucu yazdir*/
	printf("%.2lf sayisinin karekoku = %.2lf", sayi, karekok);
	
	return 0;
}
