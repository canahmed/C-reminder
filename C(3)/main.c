#include <stdio.h>

/*sayilari ve bulmak istedigimiz cevaplari tanimliyoruz*/
int main()
{
	int sayi1, sayi2;
	int toplam, fark, carpim, mod;
	float bolum;  /*virgul iceren sayi oldugu icin float dedik*/
	
	/*kullanicidan iki sayi aliyoruz*/
	printf("Lutfen iki sayi giriniz:");
	scanf("%d%d", &sayi1, &sayi2);  /* %d ile girdileri teker teker al ve & isareti ile sirayla yaz*/
	
	/*sonuc degerlerini olustur*/
	toplam = sayi1 + sayi2;
	fark = sayi1 - sayi2;
	carpim = sayi1 * sayi2;
	bolum = (float)sayi1 / sayi2;    /* buldugun sonucu floata çevir, virgüllü ver.*/
	mod = sayi1 % sayi2;
	
	/*sonuclari yazdir*/
	printf("Toplam =  %d\n", toplam);
	printf("Fark = %d\n", fark);
	printf("Carpim = %d\n", carpim);
	printf("Bolum = %f\n", bolum);         /* !!!!!!!! */
	printf("Kalan veya Mod = %d\n", mod);
	
	return 0;
	
}

/*
ALGORITMA:
1- KULLANACAGIN KUTUPHANELERI INCLUDE ET
2- MAIN E GIRIS YAP
3- INT VE FLOAT ILE IKI ADET SAYI VE SONUÇLARI TANIMLA
4- KULLANICIDAN GIRDI AL
5- SONUÇ DEGERLERINI OLUSTUR
6- SONUCLARI YAZDIR
*/


