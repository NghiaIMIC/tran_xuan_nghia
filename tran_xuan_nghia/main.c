#include <stdio.h>

/* Câu 7: Truyền vào hàm findWordInStr() địa chỉ đầu của chuỗi str và địa chỉ đầu của chuỗi mẫu
Hàm sẽ trả về địa chỉ bắt đầu của chuỗi mẫu trong chuỗi str */
char* findWordInStr(char* str, char* arr)
{
	int i = 0;
	int j = 0;
	while (1)
	{
		if (str[i] == arr[j])
		{

			while (1)
			{
				
				if (arr[j] == 0)
					break;
				if (str[i+j] == arr[j])
				{
					if (arr[j+1] == 0)
					{
						return str + i;
					}
					j++;
				}
				else
				{
					i = j;
					break;
				}
			}
		}
		else if (str[i] == 0)
			break;
		i++;
		j = 0;
	}
	return NULL;
}

void main()
{
	char str[] = " hj jh jkh abc subStr c";
	char arr[] = "subStr";
	int i = 0;

	printf("Cau 7: Dia chi dau tien cua chuoi mau trong chuoi str: %p\n", findWordInStr(str, arr));
}