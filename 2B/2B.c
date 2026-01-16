
#include <stdio.h>

void main()
{
	float base, height, area;

	printf("Insert height and base values: \n");
	scanf_s("%f %f", &height, &base);

	area = base * height;

	printf("Area: %.1f \n", area);
}