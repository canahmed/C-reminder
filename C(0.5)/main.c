#include <stdio.h>

int main()
{
	int i;
	
	i = 0;
	printf("%d\n", i);
	printf("%d\n", i++); // i degerini 1 arttir (�nce yazdir sonra arttir).
	printf("%d\n", i);
	printf("%d\n", ++i); // i degerini �nce arttir sonra yazdir.
	printf("%d\n", i);
	
	return 0;
}
