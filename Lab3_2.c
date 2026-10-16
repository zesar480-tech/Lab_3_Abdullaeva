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
	puts("Введите число:");
	scanf_s("%d", &num);
	printf("Введите число: %d\n", num);
	scanf_s("%d", &num2);
	printf("Введено число %d\n", num2);
	printf("%d %d %d %d %d", num + num2, num - num2, num2 * num, (float)num2 / num, num2 % num);

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
	printf("%d английских дюймов – это %.2f ñì\n", dym, result);

	result1 = P * dym;
	printf("%d испанских пульгад – это %.2f ñì\n", dym, result1);

	printf("\nАльтернативное задание 2А: мили в км\n");
	printf("введите количество миль: ");
	scanf("%d", &dym);

	printf("\n%d миль — это:\n", dym);
	printf("морская миля:        %.3f êì\n", M * dym);
	printf("сухопутная миля:     %.3f êì\n", S * dym);
	printf("римская миля:        %.3f êì\n", R * dym);
	printf("старорусская миля:   %.3f êì\n", ST * dym);
	printf("географическая миля: %.4f êì\n\n\n", G * dym);

	return 0;
}

int task3()
{
	setlocale(LC_CTYPE, "RUS");
	float num1, num2;

	printf("Введите первое число");
	scanf("%f", &num1);
	puts("Введите второе число");
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

	printf("\n%.2f световых лет = %.2f à.å.\n", l_y, au);

	return 0;
}


