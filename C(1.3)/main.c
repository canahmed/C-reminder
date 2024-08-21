/*Girdi cikti iþlemleri icin getchar() ve putchar() kullanimi*/
/* getchar() karakter olarak saklar tek bir harf veya sayi  alir ve listeler*/ 
#include <stdio.h>

int main()
{
	char ogrenci_notu;
	printf("Ogrenci notu giriniz: ");
	
	/*getchar() komutu ile al ve ogrenci_notu degiskesine sakla()*/
	ogrenci_notu = getchar();
	
	/* putchar() komutu ile notu cikti olarak ver*/
	putchar(ogrenci_notu);
	
	return 0;
}
