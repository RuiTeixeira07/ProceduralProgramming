
#include <stdio.h>

void main()
{
	float factory_price, taxes_price, reseller_price, final_price;
	char name[100];

	printf("Insert factory price: \n");
	scanf_s("%f", &factory_price);

	printf("Insert vehicles name: \n");
	scanf_s(" %[^\n]s", name, sizeof(name));

	taxes_price = 0.45 * factory_price;
	reseller_price = 0.28 * factory_price;
	final_price = factory_price + taxes_price + reseller_price;

	printf("Name: %s. \n", name);
	printf("Final price: %.1f. \n", final_price);
}