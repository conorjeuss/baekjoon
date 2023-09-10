#include<iostream>
#include<string>
#include<cstring>
using namespace std;

#define MAX (100)

int main(void)
{
    cout << "start\n";
    int n;
    cin >> n;
    cin.ignore();

    int cnt,cnt2;

    for(int i=0; i<n; i++)
    {
        cnt = 0;
        cnt2 = 0;

        string c;
        getline(cin,c); //c++에서 공백까지 받는 getline
        int len = c.length(); //string은 .length() 나 .size()와 같은 함수만 사용가능

        for(int j=0; j<len; j++)
        {
            if(c[j] == 'A' || c[j] == 'E' || c[j] == 'I' || c[j] == 'O' || c[j] == 'U') {
                cnt++;
            }
            else if(c[j] == 'a' || c[j] == 'e' || c[j] == 'i' || c[j] == 'o' || c[j] == 'u') {
                cnt++;
            }
            else if(c[j] != ' ') {
                cnt2++;
            }
        }
        printf("%d %d\n",cnt2,cnt);
    }
    return 0;
}
