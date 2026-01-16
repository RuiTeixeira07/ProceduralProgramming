
#include <stdio.h>

void main()
{
	float side, area;

	printf("Insert side value: \n");
	scanf_s("%f", &side);

	area = side * side;

	printf("Area: %.1f", area);
}