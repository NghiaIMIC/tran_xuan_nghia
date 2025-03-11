#include <stdio.h>
#include <math.h>
/*Truyền vào hàm một địa chỉ mảng vào kích thước của mảng
sau đó nhập vào từng phần tử mảng*/
void nhap_mang(int Array[], int size)
{
	printf("Nhap cac phan tu vao mang\n");
	for (int i = 0; i < size; i++)
	{
		scanf_s("%d", &Array[i]);
	}
}

/*In ra các phần tử có trong mảng
ứng với kích thước của mảng*/
void xuat_mang(int Array[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", Array[i]);
	printf("\n");
}

// Câu 6: Viết hàm in ra số nguyên tố trong mảng
/*Nhập vào một số nguyên bất kì
in ra màn hình nếu số đó là số nguyên tố*/
void soNguyenTo(int n)
{
	int count = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			count++;
	if (count == 2)
		printf("%d ", n);
}

// Câu 7: Viết hàm in ra số lớn nhất trong mảng
/*Đưa vào hàm một địa chỉ mảng và kích thước mảng
Hàm trả về giá trị lớn nhất trong mảng*/
int maxValue(int Array[], int size)
{
	int max = Array[0];
	for (int i = 0; i < size; i++)
		if (Array[i] >= max)
			max = Array[i];
	return max;
}

// Câu 8: Viết hàm hoán đổi 2 số nguyên
/*Đưa vào hàm 2 số nguyên a và b
hoán đổi giá trị của a và b*/
void hoanDoi(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

// Câu 9: Viết hàm sắp xếp mảng theo thứ tự tăng dần
/*Đưa vào hàm địa chỉ mảng và kích thước của mảng
In ra mảng đã sắp xếp theo thứ tự tăng dần*/
void rangeArray(int Array[], int size)
{
	for (int i = 0; i < size; i++)
	{

	}

}

void main() 
{
	int A[100];
	int size = 0;
	int a = 7;
	int b = 9;
	printf("Nhap so phan tu cua mang\n");
	scanf_s("%d", &size);
	nhap_mang(A, size);
	printf("Mang vua nhap:\n");
	xuat_mang(A, size);
	printf("Cau 6: So nguuyen to trong mang\n");
	for (int i = 0; i < size; i++)
		soNguyenTo(A[i]);
	printf("\nCau 7: Gia tri lon nhat trong mang: max = %d\n", maxValue(A, size));
	printf("Cau 8: Gia tri cua a = %d và b = %d truoc hoan doi\n", a, b);
	hoanDoi(&a, &b);
	printf("Gia tri cua a = %d va b = %d sau khi hoan doi\n", a, b);

}