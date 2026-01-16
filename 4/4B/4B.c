
#include <stdio.h>
#include <math.h>

void main()
{
	float pi = 3.141592654;
	float radius, height, volume;

	printf("Insert the radius and height values: \n");
	scanf_s("%f %f", &radius, &height);

	volume = pi * height * pow(2, radius);

	printf("Volume: %.4f \n", volume);
}