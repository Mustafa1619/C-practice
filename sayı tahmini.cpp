#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int a,b;
	srand(time(NULL));
	a=rand()%20;
	printf("bir sayi giriniz:");
	scanf("%d", &b);
	{
	while if (a<b) (printf("daha kucuk bir sayi giriniz:"); scanf("%d", &b);)
	if (a>b) printf("daha buyuk bir sayi giriniz:"); scanf("%d", &b);
	if(a=b) printf("Dogru!");
	}
	return 0;
}
