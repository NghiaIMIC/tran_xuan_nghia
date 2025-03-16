#include <stdio.h>
void main()
{
	char str[] = "Xin chao moi nguoi";
	int i = 0;
	while (1)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			printf("%c", str[i] - 32);
			if (str[i] == 0)
				break;
			i++;
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			printf("%c", str[i]);
			i++;
			continue;
		}
		else if (str[i] == 32)
		{
			printf("%c", str[i]);
			i++;
			continue;
		}
		else
			break;
	}
}