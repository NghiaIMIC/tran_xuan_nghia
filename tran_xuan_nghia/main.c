#include <stdio.h>
#include <stdlib.h>

// Hàm hoán đổi vị trí
/*Truyền vào 2 địa chỉ biến
Hàm thực hiện hoán đổi giá trị 2 biến*/
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Hàm sắp xếp giá trị trong mảng từ thấp đến cao
void arrangeArray(int* Arr, int size)
{
	int flag = 0;
	while (!flag)
	{
		flag = 1;
		for (int i = 0; i < size - 1; i++)
		{
			if (Arr[i] > Arr[i + 1])
			{
				swap(Arr + i, Arr + i + 1);
				flag = 0;
			}
		}
	}
}

int main()
{
	int A[7] = { 2,3,1,5,-1,4,2 };
	printf("Mang truoc khi sap xep\n");
	for (int i = 0; i < 7; i++)
		printf("%d ", A[i]);
	printf("\n");
	arrangeArray(A, 7);
	printf("Mang sau khi sap xep\n");
	for (int i = 0; i < 7; i++)
		printf("%d ", A[i]);
	printf("\n");
	return 0;
}