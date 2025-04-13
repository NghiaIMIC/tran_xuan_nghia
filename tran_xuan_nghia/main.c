#include <stdio.h>
#include <stdlib.h>	
#include <malloc.h>
typedef struct
{
	char ten[50];
	int tuoi;
	char gioiTinh[10];
	float diemToan;
	float diemVan;
	float diemTrungBinh;
	char xepLoai[20];

}hoc_sinh;

void NhapDuLieuHS(hoc_sinh A[], int soLuongHocSinh)
{
	for (int i = 0; i < soLuongHocSinh; i++)
	{
		printf("\n=== Nhap thong tin hoc sinh %d ===\n", i + 1);
		printf("Nhap ten hoc sinh: ");
		getchar();
		fgets(&A[i].ten, sizeof(A[i].ten), stdin);
		printf("Nhap tuoi hoc sinh: ");
		scanf_s("%d", &A[i].tuoi);
		printf("Nhap gioi tinh hoc sinh: ");
		getchar();
		fgets(&A[i].gioiTinh, sizeof(A[i].gioiTinh), stdin);
		printf("Nhap diem toan cua hoc sinh: ");
		scanf_s("%f", &A[i].diemToan);
		printf("Nhap diem van cua hoc sinh: ");
		scanf_s("%f", &A[i].diemVan);
	}
}

float DiemTrungBinh(hoc_sinh A[], int soLuongHocSinh)
{
	float max = A[0].diemTrungBinh;
	for (int i = 0; i < soLuongHocSinh - 1; i++)
	{
		if (max < A[i + 1].diemTrungBinh)
			max = A[i + 1].diemTrungBinh;

	}
	return max;
}

void list(hoc_sinh A[], int soLuongHocSinh)
{
	printf("\n");
	printf("=== Danh sach hoc sinh ===\n");
	for (int i = 0; i < soLuongHocSinh; i++)
	{
		printf("\tHoc sinh %d\n", i + 1);
		printf("\tTen HS: %s", A[i].ten);
		printf("\tTuoi: %d\n", A[i].tuoi);
		printf("\tGioi Tinh: %s", A[i].gioiTinh);
		printf("\tDiem Toan: %.2f\n", A[i].diemToan);
		printf("\tDiem Van: %.2f\n", A[i].diemVan);
		printf("\tDiem Trung Binh Toan va Van: %.2f\n", (A[i].diemToan + A[i].diemVan) / 2.0);
	}
}
void main()
{
	int n = 0;
	printf("nhap tu ban phim, so luong hoc sinh: ");
	scanf_s("%d", &n);
	hoc_sinh* x = (hoc_sinh*)malloc(n * sizeof(hoc_sinh));
	NhapDuLieuHS(x, n);
	list(x, n);
	printf("\n");
	printf("Hoc sinh co diem trung binh Toan va Van cao nhat: %f", DiemTrungBinh(x, n));
	free(x);
}