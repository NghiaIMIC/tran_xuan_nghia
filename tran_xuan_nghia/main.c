#include <stdio.h>
#include <malloc.h>

/*Câu 2: Truyền vào hàm count_space_str() địa chỉ đầu tiên của mảng
Hàm trả về số luuongjw ký tự khoảng trắng có trong chuỗi */
int count_space_str(char *arr)
{
	int count = 0;
	int i = 0;
	while (1)
	{
		if (*(arr + i) == 32)
		{
			count++;
			if (*(arr + i) == 0)
				break;
			i++;
		}
		else
		{
			if (*(arr + i) == 0)
				break;
			i++;
		}	
	}
	return count;
}

/* Câu 3: Truyền vào hàm upperConvert() địa chỉ đầu tiên của mảng
Hàm chuyển đổi ký tự thường thành ký tự HOA */
char* upperConvert(char* arr)
{
	int i = 0;
	while (1)
	{
		if (*(arr + i) >= 97 && *(arr + i) <= 122)
		{
			arr[i] -= 32;
			if (*(arr + i) == 0)
				break;
			i++;
		}
		else if (*(arr + i) >= 65 && *(arr + i) <= 90)
		{
			i++;
			continue;
		}
		else if (*(arr + i) == 32)
		{
			i++;
			continue;
		}
		else
		{
			if (*(arr + i) == 0)
				break;
			i++;
		}
	}
	return arr;
}

/* Câu 4: Truyền vào hàm địa chỉ đầu tiên của mảng
Hàm trả về số lượng từ trong chuỗi */
int countWord(char* arr)
{
	int flag = 1;
	int i = 0;
	int count = 0;
	while(1)
	{
		flag = 0;
		if (arr[i] == 32)
		{
			i++;
		}
		else
		{
			while (1)
			{
				if (arr[i] == 32)
				{
					flag = 1;
					i++;
					break;
				}
				else if (arr[i] == 0)
				{
					flag = 1;
					break;
				}
				i++;
			}
		}
		if (flag == 1)
			count++;
		if (arr[i] == 0)
			break;
	}
	return count;
}

/*Câu 5: Truyền vào hàm địa chỉ đầu tiên cua mảng
Hàm sẽ chuyển ký tự đầu của mỗi từ thành ký tự hoa*/
char* upperConvertFirstWord(char* arr)
{
	int i = 0;
	while (1)
	{
		if (arr[i] == 32)
			i++;
		else if (arr[i] >= 65 && arr[i] <= 90)
		{
			if (arr[i - 1] == 32)
				i++;
			else
			{
				arr[i] += 32;
				i++;
			}
		}
		else if (arr[i] >= 97 && arr[i] <= 122)
		{
			if (arr[i - 1] == 32)
			{
				arr -= 32;
				i++;
			}
		}
		else if (arr[i] == 0)
			break;
		else
			i++;
	}
	return arr;
}

/* Câu 6: Truyền vào hàm findCharInStr() địa chỉ đầu tiên của mảng
Hàm sẽ trả về địa chỉ của ký tự cần tìm ở trong mảng*/
char* findCharInStr(char* arr, int i)
{
	if (arr[i] == 'c' || arr[i] == 'C')
		return arr + i;
	return NULL;
}

void main()
{
	char str[] = "  jcd  hsAjHh jsChd jja hs ^%$&$  ";
	int i = 0;

	printf("Cau 2: So ky tu khoang trang trong chuoi: %d\n", count_space_str(str));
	printf("Cau 3: Chuyen doi chuoi thuong thanh chuoi hoa: %s\n", upperConvert(str));
	printf("Cau 4: So tu trong chuoi: %d\n", countWord(str));
	printf("Cau 5: Ham chuyen ky tu dau tien cua moi tu thanh ky tu HOA: %s\n", upperConvertFirstWord(str));
	printf("Cau 6: Dia chi cua ky tu c trong chuoi la:\n");
	while (1)
	{
		if (str[i] == 0)
			break;
		if (findCharInStr(str, i) != NULL)
			printf("\t%p\n", findCharInStr(str, i));
		i++;

	}
}