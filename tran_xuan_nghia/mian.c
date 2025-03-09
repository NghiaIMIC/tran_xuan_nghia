#include <stdio.h>
#include "toan.h"
void main()
{
	int a = 0;
	int b = 0;
	printf("nhap vao 2 so a va b\n");
	scanf_s("%d %d", &a, &b);
	printf("a + b = %d\n", cong(a, b));
	printf("a - b = %d\n", tru(a, b));
	printf("a * b = %d\n", nhan(a, b));
	printf("a / b = %.2f\n", chia(a, b));

}