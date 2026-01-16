
#include <stdio.h>
#include <string.h>

void main()
{
	char name[100];

	printf("Insert a name: \n");
	fgets(name, 100, stdin);

	if (strlen(name) < 20)
	{
		printf("Name: %s", name);
	}
	else
	{
		printf("Insert a name with less than 20 characters.");
	}
}