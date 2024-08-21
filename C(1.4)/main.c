#include <stdio.h>
/*dikdortgende cevre ve alan hesabi*/

int main()
{
	int en, boy, cevre, alan;

	/*girdileri aliyoruz*/
	printf("Lutfen dikdotgenin enini giriniz: ");
	scanf("%d", &en);
	
	printf("Lutfen dikdortgenin boyunu giriniz: ");
	scanf("%d", &boy);
	
	/*alan ve cevre hesabi yapiyoruz ardindan yazdiriyoruz*/
	alan = en * boy;
	
	printf("Dikdortgenin alani = %d\n", alan);
	
	cevre = 2 * (en + boy);
	
	printf("Dikdortgenin cevresi = %d", cevre);
	
	return 0;
}

// pi sayisi gibi sayilari kullanmak için math.h 
//kütüphanesini ekle ve 3.14 yazmak yerine M_PI yaz.
