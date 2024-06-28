#include<iostream>
#include<string>
#include<vector> //push_back
#include<string>
#include<cctype> //to lower, to upper
#include<algorithm> //trasform
#include<sstream>
#include<unordered_set>
#include<math.h>
using namespace std;

int main(void)
{
    int h;
    cin >> h;

    for(int i=1; i<=h; i++)
    {
        int og_i = i; //이 코드가 없으면 i값을 아래if문에서 i값을 변경시키기 때문에 코드가 제대로 작동x --> 기존의 i값을 보존시켜야 함.
        if(og_i > (h/2)+1) {
            og_i = (h/2+1)*2 - og_i;
        }

        for(int j=1; j<=(2*og_i) - 1; j++)
        {
            cout << "*";
        }
        for(int t=1; t<=((2*h)-(4*og_i)+2); t++) {
            cout << " ";
        }
        for(int j=1; j<=(2*og_i) - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
