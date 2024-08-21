/*BASIT FAIZ HESABI*/

#include <stdio.h>

int main()
{
	float ana_para, zaman, faiz_orani, faiz_miktari;
	
	/*Girdileri al*/
	printf("Ana para miktarini giriniz: ");
	scanf("%f", &ana_para);
	
	printf("Zamani giriniz: ");
	scanf("%f", &zaman);
	
	printf("Faiz orani giriniz: ");
	scanf("%f", &faiz_orani);
	
	/*faiz hesabi ile faiz miktarini hesapla*/
	
	faiz_miktari = (ana_para*zaman*faiz_orani) / 100;
	
	/* Sonucu yazdir*/
	printf("Basit faiz hesabi ile hesaplanan faiz miktari = %f", faiz_miktari);
	
	return 0;
	
}
