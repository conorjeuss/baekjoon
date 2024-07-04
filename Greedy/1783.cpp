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
    int N,M;
    cin >> N >> M;

    if(N==1) cout << "1";
    else if(N==2) cout << min(4,((M-1)/2)+1);
    else if(N>=3) {
        if(M<=6) {
            cout << min(4,M);        
        }
        else {
            cout << M-2;
        }
    }

    return 0;
}
