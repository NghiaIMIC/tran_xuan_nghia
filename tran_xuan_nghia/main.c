#include <stdio.h>

void main()
{
	// Nhập vào số tiền là bội số của 50000, in ra số tờ tiền và mệnh giá của nó
	/*long money = 0;
	int count = 0;
	int step = 1;
	printf("Nhap vao so tien la boi cua 50000: ");
	scanf_s("%ld", &money);
	while (money % 50000 != 0)
	{
		printf("Vui long nhap lai so tien la x50000: ");
		scanf_s("%ld", &money);
	}
	while (money > 0)
	{
		switch (step)
		{
		case 1:
			while (money > 1000000)
			{
				money -= 500000;
				count++;
			}
			printf("%d x 500000\n", count);
			count = 0;
			step++;
			break;
		case 2:
			while (money > 500000)
			{
				money -= 200000;
				count++;
			}
			printf("%d x 200000\n", count);
			count = 0;
			step++;
			break;
		case 3:
			while (money > 100000)
			{
				money -= 100000;
				count++;
			}
			printf("%d x 100000\n", count);
			count = 0;
			step++;
			break;
		case 4:
			while (money > 0)
			{
				money -= 50000;
				count++;
			}
			printf("%d x 50000\n", count);
			count = 0;
			step = 1;
			break;
		}
	}*/

	// Chương trình in ra cách đọc số bằng chữ
	long n = 0;
	int m = 0;
	int temp = 1;
	int count = 0;
	char* Array[] = { "linh", "muoi", "tram", "nghin", "muoi", "tram", "trieu", "muoi", "tram", "ty" };
	char* B[] = { "khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin" };
	printf("Nhap vao so tu nhien n > 0: ");
	scanf_s("%ld", &n);
	while (n > 0)
	{
		if (n < 10)
		{
			printf("%s ", B[n]);
			break;
		}
		else if (n >= 10 && n < 20)
		{
			m = n % 10;
			printf("%s %s ", Array[1], B[m]);
			break;
		}
		else
		{
			while (n / temp > 9)
			{
				m = n / temp;
				temp *= 10;
				count++;
			}
			m = n / temp;
			n -= m * temp;
			if (B[m] == "mot" && Array[count] == "muoi")
				printf("%s ", Array[count]);
			else
				printf("%s %s ", B[m], Array[count]);
			temp = 1;
			count = 0;
		}

	}
}