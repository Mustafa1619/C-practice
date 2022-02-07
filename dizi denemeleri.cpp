#include<stdio.h>
int main(){




/*	int dizi[10];
	int i;
	for(i=0;i<10;i++){
		dizi[i]=i;
		printf("%d ",dizi[i]);
	}
	return 0;
Bu int dizisi idi.*/





/*	float dizi[10];
	int i;
	
	for(i=0;i<10;i++){
		dizi[i]=i;
		printf("%.2f ",dizi[i]);
	}
	return 0;
*/




//	char harfDizi[10]; /* son eleman \0 olmalý defterime yazdým nedenini */
/*	int i;
	for(i=0;i<13;i++)
	{
		printf("%d. karakteri giriniz:",i+1);
		fflush(stdin); /* ne olduðunu okudum, link:https://eksisozluk.com/c-buffer--2545132 . koymayýnca tuhaf çalýþtý*/
/*		scanf("%c",&harfDizi[i]);
	/*	printf("%s",harfDizi); /*bunu döngü dýþýnda yazarsak her karakter giriþinde kelimeyi tamamlamak yerine bitince çýktý basar.*/
/*	}
	printf("%s",harfDizi); 
	return 0; */  
	
	/*ya da ;*/
	
	/*char harfDizi[] = "mustafa bey"; // ya da;   */
	char harfDizi[]={'m','u','s','t','a','f','a',' ','b','e','y','\0'};
	int i;
	
	printf("%s",harfDizi);
	
	return 0;
}
	// tek boyutta arrays bunlardý. kolay gelsin..
