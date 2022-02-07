#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, secim_1,secim_2, eski_bakiye, bakiye=500, miktar, internet_f=50, elektrik_f=300, su_f=100, dogalgaz_f=400;
	
	for(i=0;i<2;i++)
	{
		printf("1) Bakiye Goruntuleme\n2) Para Yatirma\n3) Para Cekme\n4) Fatura Odeme\n5) Cikis\n\nSeciminiz:");
		scanf("%d", &secim_1);		
		switch(secim_1)
		{
			case 1 :
					system("CLS");
					printf("Bakiyeniz: %d TL\n\n", bakiye); 
					i=0; 
					break;
			case 2 :
					printf("Lutfen Miktar Giriniz:");
					scanf("%d", &miktar);
					eski_bakiye=bakiye;
					bakiye=bakiye + miktar;
																														
					system("CLS");
					
					printf("\n\n--------------------------\n\n");
					printf("Eski Bakiyeniz:%d\n", eski_bakiye);
					printf("Yatirilan Tutar:%d\n", miktar);
					printf("Guncel Bakiyeniz:%d\n",bakiye);
					printf("\n\n--------------------------\n\n"); 
					i=0;	 
					break;
			case 3 :
					system("CLS");
					printf("Cekmek Istediginiz Tutar:");
					scanf("%d",&miktar);
					eski_bakiye=bakiye;
					bakiye=eski_bakiye - miktar;
					
					if(bakiye<0)
					{
						printf("Yetersiz Bakiye\n"); bakiye= bakiye + miktar;
					}
					
					printf("\n\n--------------------------\n\n");
					printf("Eski Bakiyeniz:%d\n", eski_bakiye);
					printf("Cekilen Tutar:%d\n", miktar);
					printf("Guncel Bakiyeniz:%d\n",bakiye);
					printf("\n\n--------------------------\n\n"); 
					i=0;	  
					break;
			case 4 :
				system("CLS");
				for(j=0;j<2;j++)
				{
						
					printf("1) Internet Faturasi\n2) Elektrik Faturasi\n3) Su Faturasi\n4) Dogalgaz Faturasi\n5)Geri\n\n");
					printf("Seciminiz:");
					scanf("%d", &secim_2);
					printf("\n\n");
					switch(secim_2)
					{
					
					case 1: system("CLS"); 
						    bakiye = bakiye - internet_f;
						    if(bakiye<0)
							{
							printf("Yetersiz Bakiye\n"); bakiye= bakiye + internet_f;
							}
							else
							printf("Faturaniz Odendi, Guncel Bakiyeniz:%d\n\n",bakiye);
						    j=4;  break;
					
					case 2: system("CLS");
						 	bakiye = bakiye - elektrik_f;
							if (bakiye<0)
							{
							printf("Yetersiz Bakiye\n"); bakiye= bakiye + elektrik_f;
							}
							else
						    printf("Faturaniz Odendi, Guncel Bakiyeniz:%d\n\n",bakiye); 
							j=4;  break;
					
					case 3: system("CLS");
						    bakiye = bakiye - su_f;
						    if (bakiye<0)
						    {
							printf("Yetersiz Bakiye\n"); bakiye= bakiye + su_f;
							}
						    else
							printf("Faturaniz Odendi, Guncel Bakiyeniz:%d\n\n",bakiye);
							j=4;  break;
					
					case 4: system("CLS");
						    bakiye = bakiye - dogalgaz_f;
						    if (bakiye<0)
						    {
							printf("Yetersiz Bakiye\n"); bakiye= bakiye + dogalgaz_f;
							}
							else
						    printf("Faturaniz Odendi, Guncel Bakiyeniz:%d\n\n",bakiye); 
							j=4;  break;
					
					case 5: system("CLS"); 
						    j=4;
						    break;
					
					default:
						   printf("Hatali Giris Yaptiniz\n"); j=0; break;
					}	
				}
			i=0;
			break;	
			case 5: system("CLS");
				   	i=5; 
				   	printf(" Iyi Gunler Dileriz.\n\n");
				   	break;
			default:
				   	printf("\n\n--------------------------\n\n");
				   	printf("Hatali Giris Yaptiniz");
				   	printf("\n\n--------------------------\n\n");
				   	i=0; 
				   	break;
		}
		
	}
	system("pause");
	return 0;
}
