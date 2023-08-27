#include<iostream>
#include<string.h>
int main(void)
{
    using namespace std;

    cout << "start\n";


    char word[101];
    cin >> word;

    int n = strlen(word);
    int cnt =0;
    for(int i=0; i<n; i++)
    {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'u' || word[i] == 'o')
        {
            cnt++;
        }
    }

    cout << cnt;
    

    return 0;
}
