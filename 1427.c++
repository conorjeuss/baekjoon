#include<iostream>
int main(void)
{
    using namespace std;

    cout << "program start" << "\n";

    int num;
    cin >> num;

    int arr[2][10];
    for(int i=0; i<10; i++)
    {
        arr[0][i] = i;
        arr[1][i] = 0;
    }

    while(num>0)
    {
        int a;
        a = num % 10;
        for(int i=0; i<10; i++)
        {
            if(arr[0][i] == a) {
                arr[1][i]++;
            }
        }
        num /= 10;
    }


    for(int j = 9; j>=0; j--)
    {
        if(arr[1][j] == 0)
        {
            continue;
        }
        else{
            for(int k=0; k<arr[1][j]; k++)
            {
                cout << arr[0][j];
            }
        }
    }


    return 0;
}
