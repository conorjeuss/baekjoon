#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    string word;
    getline(cin,word);

    int a = word[0] - '0';
    int b = word[4] - '0';
    int c = word[8] - '0';

    if(a + b == c) {
        cout << "YES\n";
    }   
    else {
        cout << "NO\n";
    }
    return 0;
}
