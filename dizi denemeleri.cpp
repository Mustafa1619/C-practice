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




//	char harfDizi[10]; /* son eleman \0 olmal� defterime yazd�m nedenini */
/*	int i;
	for(i=0;i<13;i++)
	{
		printf("%d. karakteri giriniz:",i+1);
		fflush(stdin); /* ne oldu�unu okudum, link:https://eksisozluk.com/c-buffer--2545132 . koymay�nca tuhaf �al��t�*/
/*		scanf("%c",&harfDizi[i]);
	/*	printf("%s",harfDizi); /*bunu d�ng� d���nda yazarsak her karakter giri�inde kelimeyi tamamlamak yerine bitince ��kt� basar.*/
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
	// tek boyutta arrays bunlard�. kolay gelsin..
