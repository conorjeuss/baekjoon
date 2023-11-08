#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string feeling;
    getline(cin,feeling);

    int len = feeling.length();

    int happy = 0;
    int saddy = 0;

    for(int i=0; i<len; i++)
    {
        if(feeling[i] == ':')
        {
            if(feeling[i+1] == '-' && feeling[i+2] == ')')
            {
                happy++;
            }
            else if(feeling[i+1] == '-' && feeling[i+2] == '(') {
                saddy++;
            }
        }
    }

    if(happy == 0 && saddy == 0) {
        cout << "none\n";
    }
    else {
        if(happy > saddy) {
            cout << "happy";
        }
        else if(happy < saddy) {
            cout << "sad";
        }
        else {
            cout << "unsure";
        }
    }

    return 0;
}
