#include<stdio.h>
int main(){
	int mesai;
	printf("lutfen mesai saatini giriniz:");
	scanf("%d",&mesai);
	if(mesai<=10)
		printf("ucret= %d", mesai*5);
	else if(mesai>10 && mesai<=20)// direkt mesai 20'den küçük eþitse de yazabilirdik. çünkü ilk koþul doðru olsaydý ilk if te çalýþýrdý zaten.(mesai>10 gereksiz)
		printf("ucret= %d",10*5 + (mesai - 10)*3);
	else
		printf("ucret= %d", 10*5 + 10*3 +(mesai-20)*2);
	return 0;
}
