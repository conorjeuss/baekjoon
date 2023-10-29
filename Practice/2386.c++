#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(void)
{

    while(1)
    {
        vector<int> alphabet(26,0);
        string line;
        char study;

        getline(cin,line); //여기서 cin.ignore()하면 입력이이상해짐

        study = line[0];

        if(study == '#') {
            break;
        }

        for(char ch : line) {
            if(ch >= 'a' && ch <= 'z') {
                alphabet[ch-'a']++;
            }
            else if(ch >= 'A' && ch <= 'Z')
            {
                alphabet[ch-'A']++;
            }
        }

        cout << study << " " << alphabet[study - 'a'] - 1 << "\n";

    }
    return 0;
}
