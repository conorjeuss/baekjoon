#include<iostream>

using namespace std;

int main(void)
{
    cout << "start" <<endl;
    int n;
    cin >> n;

    int cnt =0;

    for(int i=1; i<=n; i++)
    {
        if(i % 5 == 0)
        {
            int k = i;
            cnt++;
            if((k/5) % 5 == 0)
            {
                while((k/5) % 5 == 0)
                {
                    cnt++;
                    k = k/5;
                }
            }
        }
    }

    cout << cnt;


    return 0;
}
