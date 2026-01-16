
#include <stdio.h>

void main()
{
	float radius, height;
	float pi = 3.141592654;

	printf("Insert the radius and height values: \n");
	scanf_s("%f %f", &radius, &height);

	float volume = pi * height * radius * radius;

	printf("Volume: %.1f \n", volume);
}