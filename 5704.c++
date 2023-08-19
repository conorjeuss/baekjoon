#include<iostream>
#include<string>

using namespace std;

int main(void)
{

    while(1)
    {
        int abc[26] = {0,};

        string s;
        getline(cin,s); //getline을 사용하여 공백이랑 문자열을 받음 

        if(s == "*") {
            break;
        }

        for(int i=0; i<s.length(); i++) //strlen(s)는 string에대해 작동하지 않음 --> s.length() 사용
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                abc[s[i] - 'a']++;
            }
        }

        int check =0;
        for(int j=0; j<26; j++)
        {
            if(abc[j] > 0)
            {
                check += 1;
            }
        }

        if(check == 26) {
            printf("Y\n");
        }
        else {
            printf("N\n");
        }

    }


    return 0;
}
