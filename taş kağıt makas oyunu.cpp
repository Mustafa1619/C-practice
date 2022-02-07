#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int tas, kagit, makas, i, oyuncu, pc, pc_secim, secim;
	srand(time (NULL));
	tas = 1;
	kagit = 2;
	makas = 3;
	printf("1) tas 2) kagit 3) makas\n");
	oyuncu = 0;
	pc = 0;
	for(i=0;i<5; i++)
	{
		printf("\nseciminiz:");
		scanf("%d",&secim);
		pc_secim = rand()%3 + 1;
		
		if(secim==1)
		{
			if(pc_secim==1)
			{
				printf("\nberabere\n\n");
				printf("pc:%d\n", pc);
				printf("oyuncu:%d\n", oyuncu);
				i=0;
			}
			else if(pc_secim==2)
			{
				printf("\npc kazandi\n\n");
				pc+= 1;
				printf("pc:%d\n", pc);
				printf("oyuncu:%d\n", oyuncu);
				i=0;
			}
			else
			{
				printf("\noyuncu kazandi\n\n");
				oyuncu+=1;
				printf("pc:%d\n", pc);
				printf("oyuncu:%d\n", oyuncu);
				i=0;
			}
		}
		else if(secim==2)
		{
			if(pc_secim==1)
			{
				printf("\noyuncu kazandi\n\n");
				oyuncu+=1;
				printf("pc:%d\n", pc);
				printf("oyuncu:%d\n", oyuncu);
				i=0;
			}
			else if(pc_secim==2)
			{
				printf("\nberabere\n\n");
				printf("pc:%d\n", pc);
				printf("oyuncu:%d\n", oyuncu);
				i=0;
			}
			else
			{
				printf("\npc kazandi\n\n");
				pc+= 1;
				printf("pc:%d\n", pc);
				printf("oyuncu:%d\n", oyuncu);
				i=0;
			}
		}
		else if(secim==3)
		{
			if(pc_secim==1)
			{
				printf("\npc kazandi\n\n");
				pc+= 1;
				printf("pc:%d\n", pc);
				printf("oyuncu:%d\n", oyuncu);
				i=0;
			}
			else if(pc_secim==2)
			{
				printf("\noyuncu kazandi\n\n");
				oyuncu+=1;
				printf("pc:%d\n", pc);
				printf("oyuncu:%d\n", oyuncu);
				i=0;
			}
			else
			{
				printf("\nberabere\n\n");
				printf("pc:%d\n", pc);
				printf("oyuncu:%d\n", oyuncu);
				i=0;
			}
		}
		
		if(oyuncu==10 || pc==10)
			break;
	}
		system("pause");
		return 0;
}
