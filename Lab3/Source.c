#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define D 2.54
#define P 2.32166
#define M 1.852
#define S 1.609
#define R 1.475
#define ST 7.468
#define G 7.4126

int task1()
{
	setlocale(LC_CTYPE, "RUS");
	int num, num2;
	puts("¬ведите число:");
	scanf_s("%d", &num);
	printf("¬ведите число: %d\n", num);
	scanf_s("%d", &num2);
	printf("¬ведено число %d\n", num2);
	printf("%d %d %d %d %d", num + num2, num - num2, num2 * num, num2 / num, num2 % num);

	main1();
	main2();
	return 0;

}

int task2() {
	int dym;
	float result;
	float result1;
	printf("перевод дюймов\n");
	printf("введите значение в дюймах: ");
	scanf("%d", &dym);

	result = D * dym;
	printf("%d английских дюймов Ц это %.2f ??\n", dym, result);

	result1 = P * dym;
	printf("%d испанских пульгад Ц это %.2f ??\n", dym, result1);

	printf("\nјльтернативное задание 2ј: мили в км\n");
	printf("введите количество миль: ");
	scanf("%d", &dym);

	printf("\n%d миль Ч это:\n", dym);
	printf("морска€ мил€:        %.3f ??\n", M * dym);
	printf("сухопутна€ мил€:     %.3f ??\n", S * dym);
	printf("римска€ мил€:        %.3f ??\n", R * dym);
	printf("старорусска€ мил€:   %.3f ??\n", ST * dym);
	printf("географическа€ мил€: %.4f ??\n\n\n", G * dym);

	return 0;
}

int task3()
{
	setlocale(LC_CTYPE, "RUS");
	float num1, num2;

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

int dz() {
	const float kolichestvo = 63241.0f;

	float l_y;
	float au;

	printf("введите кол-во световых лет: ");
	scanf("%f", &l_y);

	au = l_y * kolichestvo;

	printf("\n%.2f световых лет = %.2f ?.?.\n", l_y, au);

	return 0;
}





