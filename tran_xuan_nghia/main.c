#include <stdio.h>
#include "toan.h"
void main()
{
	/*int a = 0;
	int b = 0;
	printf("nhap vao 2 so a va b\n");
	scanf_s("%d %d", &a, &b);
	printf("a + b = %d\n", cong(a, b));
	printf("a - b = %d\n", tru(a, b));
	printf("a * b = %d\n", nhan(a, b));
	printf("a / b = %.2f\n", chia(a, b));*/

	// in ra giá trị lớn nhất trong mảng
	int mang[] = { 1,4,6,7,4,76,34,33,100,1 };
	int max = 0;
	max = mang[0];
	for (int i = 0; i < 10; i++)
		if (mang[i] >= max)
			max = mang[i];
	printf("gia tri lon nhat trong mang max = %d\n", max);

}