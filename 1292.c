#include<stdio.h>
int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	int n1, m1;
	int n_num, m_num;

	int i = 1;
	int sum = 0;

	while (1)
	{
		sum += i;
		if (sum >= n) {
			n1 = i;
			n_num = n1 - (sum - n);
			break;
		}
		i++;
	}

	i = 1;
	int sum2 = 0;
	while (1)
	{
		sum2 += i;
		if (sum2 >= m) {
			m1 = i;
			m_num = m1 - (sum2 - m);
			break;
		}
		i++;
	}

	int mid = 0;
	int res_n, res_m;
	
	for (int j = n1 + 1; j <= m1 - 1; j++)
	{
		mid += j * j;
	}

	res_n = n1 * (n1 - n_num + 1);
	res_m = m1 * (m_num);

	int result;

	if (mid==0 && m1 == n1 ) {
		result = n1 * (m_num - n_num + 1);
		printf("%d\n", result);
	}
	else {
		result = mid + res_n + res_m;
		printf("%d\n", result);
	}

	//printf("%d\n", result);
	//printf("%d\n", mid);
	//printf("%d\n", n1);
	//printf("%d\n", m1);
	//printf("%d\n", n_num);
	//printf("%d\n", m_num);

	return 0;
}
