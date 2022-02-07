#include<stdio.h>
int main()
{
	int sayi, ters_basamak;
	
	printf("Bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("\nGirilen sayinin tersi:");
	while(sayi>10)
	{
		ters_basamak = sayi % 10;
		printf("%d",ters_basamak);
		sayi /= 10;
	}
	printf("%d",sayi);
}
