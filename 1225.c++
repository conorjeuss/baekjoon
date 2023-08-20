#include<iostream>
#include <cstring>
int main(void)
{
    char num1[10001];
    char num2[10001];    

    //scanf_s("%s %s", num1, sizeof(num1), num2, sizeof(num2)); scanf_s를 사용할때는 sizeof까지 추가해줘야한다
    
    scanf("%s %s",num1,num2);

    int num1_length = strlen(num1);
    int num2_length = strlen(num2);

    long long result = 0;
    int sum;

    for(int i=0; i<num1_length; i++)
    {
        for(int j=0; j<num2_length; j++)
        {
            sum = (num1[i] - '0') * (num2[j] - '0'); //문자열로 받은후 출력값을 수로 할 때는 - '0'을 해준다 (char -> int : 아스키코드를 활용 ) 
            result += sum;
        }
    }

    std::cout << result << '\n';

    return 0;
}
