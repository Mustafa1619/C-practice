#include<stdio.h>
#include<stdlib.h>
int main(){
	float x, y, sonuc;
	int i, islem;
	
	printf("Birinci sayiyi giriniz:");
	scanf("%f",&x);
	
	printf("\nIkinci sayiyi giriniz:");
	scanf("%f",&y);
	
	printf("1)Toplama\n2)Cikarma\n3)Carpma\n4)Bolme\n5)Cikis\n");
	printf("Yapacaginiz islemi giriniz:");
	scanf("%d",&islem);
	
	for(i=0;i<1;i++)
	{	
	
		
		switch(islem)
		{
			case 1:
				sonuc = x + y;
				printf("%.2f\n",sonuc);
				i=0;
				break;
			
			case 2:
				sonuc = x - y;
				printf("%.2f\n",sonuc);
				i=0;
				break;
			
			case 3:
				sonuc = x * y;
				printf("%.2f\n",sonuc);
				i=0;
				break;
			
			case 4:
				sonuc = x / y;
				printf("%.2f\n",sonuc);
				i=0;
				break;
			
			case 5:
				i=5;
				break;
			
			default:
				printf("Gecersiz islem girdiniz!");
				i=0;
				break;
				
		}
		
	}
	system("pause");
	return 0;
	
}
