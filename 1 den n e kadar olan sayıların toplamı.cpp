#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Turkish");
	int a, toplam, sayac;
	printf("Sayý giriniz:");
	scanf("%d", &a);
	toplam=0;
	sayac = 0;
	while (sayac<=a){
		toplam=toplam+sayac;
		sayac=sayac+1; 
		
	} 
	
	printf("Toplam:%d", toplam);
	
	return 0;
}

