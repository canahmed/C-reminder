#include <stdio.h>

int main()
{
	float cm, metre, km;
	
	/*uzunluklar, santimetre cinsinden al*/
	printf("Uzunlugu santimetre cinsinden giriniz: ");
	scanf("%f", &cm);
	
	/* �evrim islemlerini ger�eklestir.*/
	metre = cm / 100.0;
	km = cm / 100000.0;
	
	printf("Metre cinsinden uzunluk = %.3f m \n", metre);
	printf("Kilometre cinsinden uzunluk = %.3f km",km);
	
	return 0;
}
