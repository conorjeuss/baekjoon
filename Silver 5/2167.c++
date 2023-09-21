#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    int N,M;
    cin >> N >> M;

    vector<vector<int>> arr2(N,vector<int>(M)); //2차원 배열 생성

    for(int p=0; p<N; p++)
    {
        for(int q=0; q<M; q++)
        {
            cin >> arr2[p][q];
        }
    }

    int test_case;
    cin >> test_case;

    for(int t=0; t<test_case; t++)
    {
        int i,j,x,y;
        cin >> i >> j >> x >> y;

        int len1 = 0;
        int len2 = 0;

        len1 = (i < x) ? (x-i+1) : (i-x+1);
        len2 = (j < y) ? (y-j+1) : (j-y+1);

        int sum = 0;
        for(int a=i; a<i + len1; a++)
        {
            for(int b=j; b<j + len2; b++)
            {
                sum = sum + arr2[a-1][b-1];
            }
        }

        cout << sum << "\n";
    }


    return 0;
}
