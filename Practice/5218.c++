#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<set>
#include<queue>
#include<unordered_map>
#include<cctype> //lower,upper

using namespace std;

vector<int> arr_res(100);

void dis(string word1,string word2)
{
    int len_1,len_2;

    len_1 = word1.length();
    len_2 = word2.length();

    for(int i=0; i<len_1; i++)
    {
        int res = (word2[i] - 'A') - (word1[i] - 'A');
        if(res >= 0) {
            arr_res[i] = res;
        }
        else {
            arr_res[i] = res + 26;
        }
    }

    int s = len_1;

    //출력
    cout << "Distances:";
    for(int j=0; j<s; j++) {
        cout << " " << arr_res[j];
    }
    cout << "\n";
}

int main(void)
{
    int test_case;
    cin >> test_case;

    while(test_case--)
    {
        string word1;
        string word2;

        cin >> word1 >> word2;

        dis(word1,word2);
    }

    return 0;
}
