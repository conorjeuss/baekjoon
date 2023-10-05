#include<iostream>
#include<algorithm> //min,max
#include<vector>
using namespace std;

int main(void)
{
    int N;
    cin >> N;

    
    for(int i=0; i<N; i++)
    {
        int arr[3] = {0,};
        for(int j=0; j<3; j++)
        {
            cin >> arr[j];
        }
        
        bool check = false;
        if(arr[0] < arr[1] && arr[1] < arr[2] || arr[0] > arr[1] && arr[1] > arr[2]) {
            check = true;            
        }
        if(i == 0) {
            cout << "Gnomes:\n";
        }
        if(check == true) {
            cout << "Ordered\n";
        }
        else {
            cout << "Unordered\n";
        }
    }
    return 0;
}
