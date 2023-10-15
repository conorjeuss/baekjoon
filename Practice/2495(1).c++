#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    for(int k=0; k<3; k++)
    {
        int num;
        cin >> num;
        string str_num = to_string(num); // 정수를 문자열로 변환

        int max_length = 1;
        int curr_length = 1;

        for(int i=1; i<str_num.length(); i++) // 첫 번째 숫자부터 비교
        {
            if (str_num[i] == str_num[i - 1])
            {
                curr_length++;
                max_length = max(max_length, curr_length);
            }
            else
            {
                curr_length = 1;
            }
        }
        cout << max_length << endl;
    }
    return 0;
}
