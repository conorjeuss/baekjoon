#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void)
{
    string word;
    cin >> word;

    int arr[5];
    fill(arr,arr+5,0);

    int len = word.length();
    for(int i=0; i<len; i++)
    {
        if(word[i] == 'M') {
            arr[0] += 1;
        }
        else if(word[i] == 'O') {
            arr[1] += 1;
        }
        else if(word[i] == 'B') {
            arr[2] += 1;
        }
        else if(word[i] == 'I') {
            arr[3] += 1;
        }
        else if(word[i] == 'S') {
            arr[4] += 1;
        }
    }

    for(int i=0; i<5; i++)
    {
        if(arr[i] == 0) {
            cout << "NO";
            break;
        }
        else if(i==4){
            cout << "YES";
        }
    }

    return 0;
}
