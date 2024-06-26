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

int gcd(int a,int b)
{
    if(b == 0) return a;
    else {
        return gcd(b,a%b);
    }
}

int main(void)
{
    int max_gcd = 1;
    vector<int> k;
    int n;

    while(cin >> n)
    {
        k.emplace_back(n);
    }

    int vec_size = k.size();

    for(int i=0; i<vec_size; i++)
    {
        for(int j=i+1; j<vec_size; j++)
        {
            max_gcd = max(max_gcd,gcd(k[i],k[j]));
        }
    }

    cout << max_gcd;
    return 0;
}
