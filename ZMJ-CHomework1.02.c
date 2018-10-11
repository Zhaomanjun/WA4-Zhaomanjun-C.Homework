#include<stdio.h>
#include<stdlib.h>

int main()
{
	const double a = 1.2;
	const double b = 4.3;
	const double h = 6.4;
	double volume;
	volume=a * b * h;
	
	printf("volume=%.3f\n", volume);
	
	system("PAUSE");
	return 0;
}

