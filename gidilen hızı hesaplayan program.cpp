#include<stdio.h>
#include<stdlib.h>
int main()
{
	float x, v, t;
	int i;
	for(i=0;i<3; i++)
	{
	
	
			printf("-------Gidilen hizi hesaplayan program----------\n");
	
			printf(" Gidilen yolu giriniz:");
			scanf("%f", &x);
		
			printf("\n Gecilen sureyi giriniz:");
			scanf("%f", &t);
	
			v= x / t;
			system("CLS");
		
			printf("\nGidilen hiz: %.2f m/s\n",v);
			
			i=0;  /*buraya if else ile bir tu�a bast���mda kapanmas�n� 
			sa�layaca��m bir �ey koyaca��m, �imdilik sonsuz d�ng�de.*/
 	}
	system("pause");
	return 0;
}
