#include <stdio.h>
int main()
{
int dizi[3][3], i, j;
for (i = 0; i<3; i++)
{
for (j = 0; j<3; j++)
{
if (i == j)
dizi[i][j] = 1;
else
dizi[i][j] = 0;
printf("%3d", dizi[i][j]);
}
printf("\n");
}
return 0;
}
