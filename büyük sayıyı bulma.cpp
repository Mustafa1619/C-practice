#include<stdio.h>
int main(){
	int a,b;
	
	printf("2 sayi giriniz:");
	scanf("%d %d", &a, &b);
	
	if(a>b)
		printf("buyuk sayi %d",a);// e�er if den sonra 2 sat�r kod yazmak istersek s�sl� parantez kullanmak zorunday�z.  
// ��nk� if else ko�ulundan sonra sadece birer sat�r ko�ula ba�lan�r.	
	else if(b>a)
		printf("buyuk sayi %d",b);
	
	else
	printf("sayilar esit");
	
	return 0;
}
