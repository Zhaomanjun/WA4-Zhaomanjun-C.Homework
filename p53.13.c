#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int a,b,add,minus,product,division,remainder;
	a = 10;
	b = 3;
	add = a + b;
	minus = a - b;
	product = a * b;
	division = a / b;
	remainder = a % b;
	
	printf("add=%d\nminus=%d\nproduct=%d\ndivision=%d\nremainder=%d\n",add,minus,product,division,remainder);
	
	system("PAUSE");
	return 0;
}
