#include<stdio.h>
#include<math.h>
int main(void)
{
	int n;
	scanf("%d", &n);

	int k = 100;
	int cnt = 0;

	if (n < 100) {
		printf("%d\n", n);
	}

	else {
		while (k <= n)
		{
			int a, b, c;
			a = k / 100;
			b = k % 100 / 10;
			c = k % 100 % 10 / 1;

			if (b * 3 == a + b + c)
			{
				cnt++;
			}

			k++;
		}

		printf("%d", cnt + 99);

	}
	return 0;
}
