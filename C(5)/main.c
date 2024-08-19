#include <stdio.h>

int main()
{
	int i;
	
	i = 0;
	printf("%d\n", i);
	printf("%d\n", i++); // i degerini 1 arttir (önce yazdir sonra arttir).
	printf("%d\n", i);
	printf("%d\n", ++i); // i degerini önce arttir sonra yazdir.
	printf("%d\n", i);
	
	return 0;
}
