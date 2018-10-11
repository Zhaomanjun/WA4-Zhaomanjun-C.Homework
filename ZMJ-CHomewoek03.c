#include<stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main()
{
	double r = 5.3;
	double Area, circumference;
	Area = 0.5*PI*r*r;
	circumference = PI*r;
	
	printf("Area=%.5f\n",Area);
	printf("circumference=%.5f\n",circumference);
	
	system("PAUSE");
	return 0;
}
