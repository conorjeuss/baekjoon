#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    int test_case;
    cin >> test_case;
    cin.ignore();

    while(test_case--)
    {
        string name;
        getline(cin,name);

        int arr[2] = {0,0};
        
        int len = name.length();

        for(int i=0; i<len; i++)
        {
            if(name[i] == 'b' || name[i] == 'B') {
                arr[0]++;
            }
            else if(name[i] == 'g' || name[i] == 'G') {
                arr[1]++;
            }
        }

        if(arr[0] > arr[1]) {
            cout << name << " is A BADDY\n";
        }
        else if(arr[0] < arr[1]) {
            cout << name << " is GOOD\n";
        }
        else {
            cout << name << " is NEUTRAL\n";
        }

        
    }
    return 0;
}
