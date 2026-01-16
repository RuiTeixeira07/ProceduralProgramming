
#include <stdio.h>

void main()
{
	float base, height;

	printf("Insert the base and height values: \n");
	scanf_s("%f %f", &base, &height);

	float area = (base * height) / 2;

	printf("Area: %.1f \n", area);
}