#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>

using namespace std;

string change_to_pd(string name) {
    map<char,int> count;
    string res = "";

    for(char c : name) {
        count[c]++; //map에는 count[A]가없지만 비어있다면 자동으로 생성된다. 따라서 알아서 ++된다.
    }

    int odd_cnt = 0;
    char odd_c;
    string half_pd = "";

    for(auto &[c,freq] : count) {
        if(freq % 2 == 1) { //홀수개일때
            odd_cnt++;
            odd_c = c;
        }
    }

    if(odd_cnt > 1) {
        res = "I'm Sorry Hansoo\n";
        return res;
    }
    else if(odd_cnt == 1) {
        for(auto &[c,freq] : count) {
            if(c == odd_c) {
                half_pd.append(freq/2,c); 
            }
            else {
                half_pd.append(freq/2,c);
            }
        }

        res = res + half_pd;
        res += odd_c;

        reverse(half_pd.begin(),half_pd.end());
        res += half_pd;
    }
    else//odd_cnt 가 0일때
    {
        for(auto &[c,freq] : count) {
            half_pd.append(freq/2,c);
        }

        res = res + half_pd;
        reverse(half_pd.begin(),half_pd.end());
        res += half_pd;
    }

    return res;
}

int main(void)
{
    string name;
    cin >> name;

    string res = change_to_pd(name);

    cout << res;

    return 0;
}

//map 자료형에 만약 키값이 지정이 안되어있다고 하더라도 
    for(char c : name) {
        count[c]++; //map에는 count[A]가없지만 비어있다면 자동으로 생성된다. 따라서 알아서 ++된다.
    } 이런식으로 사용해도된다. A와 count값인 value값을 알아서 처리해준다
//map 자료형은 자동으로 key값을 기준으로 오름차순 정렬된다. --> sort함수 사용안해도됨.
// for(auto &[c,freq] : count) --> c++ structured bindings를 사용하는 반복문이다
key와 value가 들어있는 map같은 컨테이너에서 쉽게 값에 접근할수 있다.
실행시에(만약 map에 AABBBCCCCC가 들어있을때)
1.c = 'A' , freq = 2
2.c = 'B' , freq = 3
3.c = 'C' , freq = 5
  이런식으로 순차적으로 값에 접근하게 된다.
