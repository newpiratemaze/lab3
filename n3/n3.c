#include<stdio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int a, b;


	char *c1 = "a", *c2 = "b";

	printf("������� ����� a � b\n");
	scanf("%d%d",&a,&b);
	printf("_________________________________________________________________________\n");
	printf("|  %*s * %*s  |  %*s + %*s  |  %*s - %*s  |  %*s / %*s  |\n",5, c1,5,c2,5,c1,5,c2,5,c1,5,c2, 5,c1,5,c2);
	printf("-------------------------------------------------------------------------\n");
	printf("| %*d * %*d | %*d + %*d | %*d - %*d | %*d / %*d |\n",6,a,6,b,6,a,6,b,6,a,6,b,6,a,6,b);
	printf("-------------------------------------------------------------------------\n");
	printf("|%*d      | %*d      | %*d      | %*d      |\n",11,a*b, 10, a + b, 10, a - b,10,a/b);
	





}