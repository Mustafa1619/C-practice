#include<stdio.h>
#include<stdlib.h>
int main()
{	
	float elek, fiyat;

	printf("--------Elektrik Faturasi---------\n\n");
	printf("Kullanilan Elektrik:");
	scanf("%f", &elek);
	
	if(elek<50)
		printf("\nFatura Bedeli:%f\n",elek*=0.40);
	
	else if(elek<100)
		printf("\nFatura Bedeli:%f\n",elek*=0.70);
	
	else if(elek<150)
		printf("\nFatura Bedeli:%f\n",elek*=1.10);
	
	else
		printf("\nFatura Bedeli:%f\n",elek*=1.50);
		
	system("pause");
	return 0;
}
