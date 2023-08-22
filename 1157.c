#include<stdio.h>
#include<string.h>
int main(void)
{
	char word[1000000];
	scanf("%s", word, sizeof(word));
  //scanf("%999999s", word); ==> 이코드는 문자열이 1000000인 word의 범위를 넘지않기위해 %s앞에 999999를 써줌(오버플로우방지)
	int word_len = strlen(word);
	int arr_cnt_all[26];
	
	// arr_cntall초기화
	for (int q = 0; q < 26; q++)
	{
		arr_cnt_all[q] = 0;
	}
	
	//소문자로 표현된 단어 count
	for (int i = 'a'; i <= 'z'; i++)
	{
		for (int j = 0; j < word_len; j++)
		{
			if (word[j] == i) {
				arr_cnt_all[i - 'a'] += 1;
			}
		}
	}
	
	//대문자로 표현된 단어 count 
	for (int k = 'A'; k <= 'Z'; k++)
	{
		for (int j = 0; j < word_len; j++)
		{
			if (word[j] == k) arr_cnt_all[k - 'A'] += 1;
		}
	}

	//저장완료
	// 이후에 배열에서 가장큰값을 값을 대문자로 출력

	int word_cnt_max = arr_cnt_all[0];
	int result_num;
	for (int i = 0; i < 26; i++)
	{
		if (word_cnt_max < arr_cnt_all[i])
		{
			word_cnt_max = arr_cnt_all[i];
			result_num = i;
		}
		if (word_cnt_max == arr_cnt_all[0])
		{
			result_num = 0;
		}
	}



	//출력
	int cnt=0;
	for (int i = 0; i < 26; i++)
	{
		if (word_cnt_max == arr_cnt_all[i]) {
			cnt++;
		}
		//printf("%d ", arr_cnt_all[i]);
	}
	//printf("%d ", word_cnt_max);

	if (cnt > 1) {
		printf("?");
	}
	else
	{
		printf("%c", (char)(result_num + 'A'));
	}

	return 0;
}
