#include <stdio.h>

typedef struct
{
	int tu;
	int mau;
}phan_so_t;

int UocChungLonNhat(phan_so_t A)
{
	if (A.tu < 0 || A.mau < 0)
	{
		A.tu = A.tu * (-1);
		A.mau = A.mau * (-1);
	}
	int min = A.tu;
	int max = 0;
	if (A.tu > A.mau)
		min = A.mau;
	for (int i = 1; i <= min; i++)
	{
		if (A.tu % i == 0 && A.mau % i == 0)
			max = i;
	}
	return max;
}

phan_so_t RutGonPhanSo(phan_so_t A)
{
	int ucln = UocChungLonNhat(A);
	phan_so_t pstg;
	pstg.tu = A.tu / ucln;
	pstg.mau = A.mau / ucln;
	return pstg;
}

phan_so_t CongPhanSo(phan_so_t A, phan_so_t B)
{
	phan_so_t sum;
	sum.tu = A.tu * B.mau + B.tu * A.mau;
	sum.mau = A.mau * B.mau;
	sum = RutGonPhanSo(sum);
	return sum;
}

phan_so_t TruPhanSo(phan_so_t A, phan_so_t B)
{
	phan_so_t sub;
	sub.tu = A.tu * B.mau - B.tu * A.mau;
	sub.mau = A.mau * B.mau;
	//sub = RutGonPhanSo(sub);
	return sub;
}

phan_so_t NhanPhanSo(phan_so_t A, phan_so_t B)
{
	phan_so_t mul;
	mul.tu = A.tu * B.tu;
	mul.mau = A.mau * B.mau;
	mul = RutGonPhanSo(mul);
	return mul;
}

phan_so_t ChiaPhanSo(phan_so_t A, phan_so_t B)
{
	phan_so_t div;
	div.tu = A.tu * B.mau;
	div.mau = A.mau * B.tu;
	div = RutGonPhanSo(div);
	return div;
}

void main()
{
	phan_so_t A = {.tu = 1, .mau = 2};
	phan_so_t B = {.tu = 2, .mau = 3};
	phan_so_t sum = CongPhanSo(A, B);
	phan_so_t sub = TruPhanSo(A, B);
	phan_so_t mul = NhanPhanSo(A, B);
	phan_so_t div = ChiaPhanSo(A, B);
	printf("%d/%d + %d/%d = %d/%d\n", A.tu, A.mau, B.tu, B.mau, sum.tu, sum.mau);
	printf("%d/%d - %d/%d = %d/%d\n", A.tu, A.mau, B.tu, B.mau, sub.tu, sub.mau);
	printf("%d/%d * %d/%d = %d/%d\n", A.tu, A.mau, B.tu, B.mau, mul.tu, mul.mau);
	printf("%d/%d : %d/%d = %d/%d\n", A.tu, A.mau, B.tu, B.mau, div.tu, div.mau);
}