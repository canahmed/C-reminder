#include<stdio.h>

int main()
{
	int x = 5, y = 6, z = 50;   /* int degerleri atandi*/
	printf("%d", x + y + z);    /* istediðimiz doplama degeri yazildi*/
	printf("\n...\n");          /* satir kaydirma*/
	
	x = y = z = 50;             /* butun degerlere 50 verildi*/
	printf("%d", x + y + z);    /* istediðimiz doplama degeri yazildi*/
	
	return 0;
}

