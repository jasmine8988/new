#include<stdio.h>

int main()
{
	float C, F;
	printf("enter temperature in C: ");
	scanf("%f",&C);
	F=C*9/5+32;
	printf("%.1f C =%.1f F", C,F);
	
}


#include<stdio.h>

int main()
{
	float F, C;
	printf("enter temperature in F: ");
	scanf("%f",&F);
	C=(F-32)*5/9;
	printf("%.1f F =%.1f C", F,C);
	
}

	
