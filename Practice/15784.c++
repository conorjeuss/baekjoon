#include<iostream>
#include<string>
#include<vector> //push_back
#include<string>
#include<cctype> //to lower, to upper
#include<algorithm> //trasform
#include<sstream>
#include<unordered_set>
using namespace std;

int field[1001][1001];

int main(void)
{
    int N;
    int a,b;
    
    cin >> N >> a >> b;

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin >> field[i][j];
        }
    }

    bool c = false;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(field[i][b-1] > field[a-1][b-1] || field[a-1][j] > field[a-1][b-1]) {
                c = true;
                break;
            }
        }
    }
    
    if(c) {
        cout << "ANGRY";
    }
    else {
        cout << "HAPPY";
    }
    return 0;
}
