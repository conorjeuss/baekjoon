#include<iostream>
int main(void)
{
    using namespace std;

    cout << "start\n";

    int test;
    cin >> test;

    while(test > 0)
    {
        int num;
        cin >> num;

        int res;
        cout << "Pairs for " << num << ":";
        
        for(int i=1; i<=num/2; i++)
        {
            res = num - i;
            if(i == res || res == 0) {
                continue;
            }    
            else {
                if(i == 1)
                {
                    printf(" %d %d",i,res);
                }
                else {
                    printf(", %d %d",i,res);
                }
            }
        }

        cout << "\n";

        test--;
    }

    return 0;
}
