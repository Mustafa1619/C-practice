#include<stdio.h>
int main(){
	int a,b;
	
	printf("2 sayi giriniz:");
	scanf("%d %d", &a, &b);
	
	if(a>b)
		printf("buyuk sayi %d",a);// eðer if den sonra 2 satýr kod yazmak istersek süslü parantez kullanmak zorundayýz.  
// çünkü if else koþulundan sonra sadece birer satýr koþula baðlanýr.	
	else if(b>a)
		printf("buyuk sayi %d",b);
	
	else
	printf("sayilar esit");
	
	return 0;
}
