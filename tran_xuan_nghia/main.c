#include <stdio.h>
#include <math.h>
/*Truyền vào hàm một địa chỉ mảng vào kích thước của mảng
sau đó nhập vào từng phần tử mảng*/
void nhap_mang(float Array[], int size)
{
	printf("Nhap cac phan tu vao mang\n");
	for (int i = 0; i < size; i++)
	{
		scanf_s("%f", &Array[i]);
	}
}

/*In ra các phần tử có trong mảng
ứng với kích thước của mảng*/
void xuat_mang(float Array[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%.2f ", Array[i]);
	printf("\n");
}
 
// câu 1: Tính tong các phần tử trong mảng
/*Truyền vào một địa chỉ mảng và kích thước của mảng
hàm trả về kết quả tổng của mảng*/
float tong_mang(float Array[], int size)
{
	float sum = 0;
	for (int i = 0; i < size; i++)
		sum += Array[i];
	return sum;
}

// Câu 2: Tính trung bình các phần tửu lẻ trong mảng
/*Truyền vào một địa chỉ mảng và kích thước của mảng
hàm trả về kết quả trung bình cộng của các phần tử lẻ có trong mảng*/
float avr_odd(float Array[], int size)
{
	int count = 0;
	float sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (fmod(Array[i], 2.0) != 0)
		{
			sum += Array[i];
			count++;
		}
	}
	float averageOdd = sum / count;
	return averageOdd;
}

// Câu 3: In ra vị trí số lớn nhất trong mảng
/*Truyền vào một địa chỉ mảng và kích thước của mảng
hàm trả về kết quả vị trí của số lớn nhất trong mảng*/
int index(float Array[], int size)
{
	float max = Array[0];
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if (Array[i] >= max)
			index = i;
	}
	return index;
}

// Câu 4: Thay thế các số âm trong mảng bằng số 0
/*Truyền vào một địa chỉ mảng và kích thước của mảng
hàm thay thế các phần tử âm bằng 0 trong mảng nếu có*/
void thaySoAmCuamang(float Array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (Array[i] < 0)
			Array[i] = 0;
	}
	xuat_mang(Array, size);
}

void main() 
{
	float A[100];
	int size = 0;
	printf("Nhap so phan tu cua mang\n");
	scanf_s("%d", &size);
	nhap_mang(A, size);
	printf("\nMang vua nhap la:\n");
	xuat_mang(A, size);
	printf("Tong mang: sum = %.2f\n",tong_mang(A, size));
	printf("Trung binh cong cac phan tu le trong mang: avr = %.2f\n",avr_odd(A, size));
	printf("Vi tri phan tu lon nhat trong mang: index = %d\n",index(A, size));
	printf("mang ban dau\n");
	xuat_mang(A, size);
	printf("Mang sau khi thay: \n");
	thaySoAmCuamang(A, size);
}