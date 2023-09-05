#include<iostream>

using namespace std;

int main(void)
{
    cout << "start\n";

    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;

        for(int j=0; j<a; j++)
        {
            cout << "=";
        }
        cout << "\n";
    }

    return 0;
}
