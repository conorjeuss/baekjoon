#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int main(void)
{
    string s;
    while(1)
    {
        int cnt = 0;
        getline(cin,s);
        if(s == "#") {
            break;
        }
        else {
            int len = s.length();
            for(int i=0; i<len; i++)
            {
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
                {
                    cnt += 1;
                }
                else if(s[i] == 'a'-'a'+'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

------------------------------------------------------
//문자열과 문자
//string 타입은 문자열 리터럴인 ""큰따옴표를 사용해서 비교해야함 --> string s == "#";
//char 타입은 문자 리터럴인 ''작은 따옴표를 사용해서 비교해야함 --> char c == '#';
