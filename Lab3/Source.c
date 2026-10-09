#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define D 2.54
#define M 2.32
#define S 7.46
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int num, num2;
	puts("¬ведите число:");
	scanf_s("%d", &num);
	printf("¬ведите число: %d\n",num);
	scanf_s("%d", &num2);
	printf("¬ведено число %d\n", num2);
	printf("%d %d %d %d %d", num + num2, num - num2, num2 * num, num2 / num, num2 % num);

	main1();
	main2();
	return 0;

}

int main1()
{
	setlocale(LC_CTYPE, "RUS");
	int dym;
	float result;

	printf("\n¬ведите число дл€ расчета:");
	scanf_s("%d", &dym);
	result = D * dym;
	printf("У%d дюймов = %.1f сантиметров\n ", dym, result);
	printf("%d  испанских дюймов = %.0f сантиметров\n", dym, M * dym);
	printf(" % d  старолитовских дюймов = %.1f сантиметров\n", dym, S * dym);

	return 0;

}


int main2()
{
	setlocale(LC_CTYPE, "RUS");
	float num1,num2;

	printf("¬ведите первое число");
	scanf("%f", &num1);
	puts("¬ведите второе число");
	scanf("%f", &num2);
	
	printf("__________________________________________________\n |     a * b     |     a + b     |     a - b     | \n__________________________________________________\n | %5.1f * %5.1f | %5.1f + %5.1f | %5.1f - %5.1f | \n__________________________________________________\n", num1, num2, num1, num2, num1, num2, num1 * num2, num1 + num2, num1 - num2);

	printf("\n");
	printf("\n");
	printf("\n");
	return 1;

}





