#include <stdio.h>
int dpu(int);
int main()
{
 int sayi;
 printf("sayi giriniz : ");
 scanf("%d", &sayi);
 printf("dpu(%d) : %d\n", sayi, dpu(sayi));
 return 0;
}
int dpu(int sayi)
 {
 if ((sayi == 0) || (sayi == 1))
 return sayi;
 else
 return dpu(sayi - 1) +
 dpu(sayi - 2);
 }

