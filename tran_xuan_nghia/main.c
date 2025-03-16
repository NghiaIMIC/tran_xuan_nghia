#include <stdio.h>


int main()
{
	char str[] = "jhhjkhnnjk";
	int flag = 0;
	int count = 1;
	int i = 0;
	while (!flag)
	{
		flag = 1;
		if (str[i] != 0)
		{
			i++;
			count++;
			flag = 0;
		}
	}
	printf("So ky tu trong mang: %d\n", count);
}