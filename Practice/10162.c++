#include<iostream>
#include<vector>
using namespace std;

int main(void)
{
    vector<int> arr(3,0);
    int num;
    cin >> num;

    if(num%10 != 0) {
        cout << "-1\n";
    }

    else {
        if(num < 60)
        {
            arr[2] = num / 10;
        }
        else if(num < 300) {
            arr[1] = num / 60;
            arr[2] = (num % 60) / 10;
        }
        else {
            arr[0] = num / 300;
            arr[1] = (num % 300) / 60;
            arr[2] = ((num % 300) % 60) / 10;
        }

        for(int i=0; i<3; i++) {
            if(i != 2) {
                cout << arr[i] << " ";
            }
            else {
                cout << arr[i];
            }
        }
    }

    return 0;
}
