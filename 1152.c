#include<stdio.h>
#include<string.h>
int main(void)
{
	int i, len, cnt = 0;
	char arr[1000000];
	
	scanf("%[^\n]", arr); //%[^/n] ==> 개행문자(Enter)을 만나기 전까지 공백을 포함한 문자를 받을 수 있음
	len = strlen(arr);

	if (len == 1)
	{
		if (arr[0] == ' ')
		{
			printf("0\n");
			return 0;
		}
	}

	for (i = 1; i < len - 1; i++)
	{
		if (arr[i] == ' ') cnt++;
	}

	printf("%d\n", cnt + 1);
	return 0;
}
