#include <stdio.h>
#include <math.h>

void main() 
{
	// Chương trình tính tổng các phân tử trong mảng
	float Array[100];
	printf("Nhap so phan tu cua mang\n");
	int size = 0;
	scanf_s("%d", &size);
	printf("Nhap cac phan tu vao mang\n");
	for (int i = 0; i < size; i++)
	{
		scanf_s("%f", &Array[i]);
	}
	printf("\nMang vua nhap la:\n");
	for (int i = 0; i < size; i++)
		printf("%.2f ", Array[i]);
	float sum = 0;
	for (int i = 0; i < size; i++)
		sum += Array[i];
	printf("\nTong cac phan tu cua mang: sum = %.2f\n", sum);

	// chương trình tính trung bình các số lẻ trong mảng
	int count = 0;
	sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (fmod(Array[i], 2.0) != 0)
		{
			sum += Array[i];
			count++;
		}
	}
	float averageOdd = sum / count;
	printf("Trung binh cuua mang: average = %.2f / %d = %.2f\n",sum, count, averageOdd);

}