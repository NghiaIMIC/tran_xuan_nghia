#include <stdio.h>
#include <string.h>
#include <malloc.h>

int soLuongKyTu(char* arr)
{
	int SL = 0;
	while (arr[SL] != 0)
		SL++;
	return SL;
}
char* TimKyTu(char* arr, char* subArr)
{
	int sizeArr = soLuongKyTu(arr);
	int sizeArrSub = soLuongKyTu(subArr);
	for (int i = 0; i < sizeArr; i++)
	{
		int j;
		for (j = 0; j < sizeArrSub; j++)
		{
			if (arr[i + j] != subArr[j])
				break;
		}
		if (j == sizeArrSub)
			return arr + i;
	}
	return NULL;
}
int TrangThaiQuat(char* data)
{
	char* key = "\"fan\" : \"";
	char* stt = TimKyTu(data, key);
	stt += soLuongKyTu(key);
	int count = 0;
	while (stt[count] != '"')
	{
		count++;
	}
	char* status = malloc(count + 1);
	memset(status, 0, count + 1);
	memcpy(status, stt, count);
	if (TimKyTu(status, "on") != 0)
	{
		free(status);
		return 1;
	}
	else
	{
		free(status);
		return 0;
	}
}
void main()
{
	char data[] = "HTTP1.1 200 OK{"\
		"\"light\": \"on\","\
		"\"fan\" : \"off\","\
		"\"motor\" : \"off\"}";
	printf("%d\n", TrangThaiQuat(data));

}