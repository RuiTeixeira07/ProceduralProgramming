
#include <stdio.h>

void main()
{
	char name[100];
	float hoursWorked, INSS, IRS;
	float payBeforeTax, finalPay;
	int nDependants;

	printf("Insert your name: \n");
	scanf_s("%[^\n]s", name, sizeof(name));

	printf("Hours worked: \n");
	scanf_s("%f", &hoursWorked);

	printf("Number of dependants: \n");
	scanf_s("%d", &nDependants);

	payBeforeTax = 12 * hoursWorked + 40 * nDependants;
	INSS = payBeforeTax * 0.085;
	IRS = payBeforeTax * 0.05;
	finalPay = payBeforeTax - (INSS + IRS);

	printf("Name: %s. \n", name);
	printf("Pay Before Tax: %.3f€. \n", payBeforeTax);
	printf("INSS: %.3f€. \n", INSS);
	printf("IRS: %.3f€. \n", IRS);
	printf("Final Pay: %.3f€. \n", finalPay);
}