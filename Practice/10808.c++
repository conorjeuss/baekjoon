#include<iostream>
#include<string.h>
using namespace std;

int main(void)
{
    string word;
    cin >> word;

    int arr[26] = {0,};
    int len = word.length();

    for(int i=0; i<len; i++)
    {
        for(int j=0; j<26; j++)
        {
            if(word[i] - 'a' == j) { // 문자에서 문자를 뺴면 문자간의 거리라고 생각해도 됨.
                arr[j] += 1;
            }
        }
    }

    for(int i=0; i<26; i++)
    {
        cout << arr[i] << ' ';
    }

    return 0;
}
