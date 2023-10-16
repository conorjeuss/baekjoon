#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(void)
{
    string plate;
    getline(cin,plate);

    int length = plate.length();
    int res_len = 10;


    for(int i=1; i<length; i++)
    {
        if(plate[i] == plate[i-1]) {
            res_len += 5;
        }
        else {
            res_len = res_len + 10;
        }
    }
    
    cout << res_len;

    return 0;
}
