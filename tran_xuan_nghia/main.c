#include <stdio.h>

int main()
{
	char str[] = "jhhjKhMnnJk";
	int flag = 0;
	int count = 0;
	int i = 0;
	while (!flag)
	{
		flag = 1;
		if (str[i] != 0)
		{
			i++;
			
			flag = 0;
		}
		if(str[i] >= 65 && str[i] <= 90 )
			count++;
	}
	printf("So ky tu trong mang: %d\n", i + 1);
	printf("So phan tu viet hoa trong chuoi: %d\n", count);
}