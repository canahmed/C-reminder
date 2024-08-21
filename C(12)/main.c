/* basit ve bileþik faiz hesaplama*/

#include <stdio.h>
#include <math.h>

int main()
{
	float ana_para, zaman, faiz_orani, basit_faiz_miktari, bilesik_faiz_miktari;
	
	/*Girdileri al*/
	printf("Ana para miktarini giriniz: ");
	scanf("%f", &ana_para);
	
	printf("Zamani giriniz: ");
	scanf("%f", &zaman);
	
	printf("Faiz oranini giriniz: ");
	scanf("%f", &faiz_orani);
	
	/*basit faiz hesabi ile faiz miktari hesapla*/
	basit_faiz_miktari = (ana_para * zaman * faiz_orani) / 100;
	
	/* basit faiz hesabinin soucunu yazdir*/
	printf("Basit faiz hesabi ile hesaplanan faiz miktari = %f\n", basit_faiz_miktari);
	
	/* bileþik faiz hesabini yap*/
	bilesik_faiz_miktari = ana_para * (pow((1 + faiz_orani / 100),zaman));
	
	/*Bilesik faiz hesabinin sonucunu yazdir*/
	printf("Bilesik faiz hesabi ile hesaplanmis faiz miktari = %f", bilesik_faiz_miktari);
	
	return 0;
}
