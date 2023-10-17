#include<iostream>
using namespace std;

int main(void)
{
    int attack_a,HP_a;
    int attack_b,HP_b;

    cin >> attack_a >> HP_a;
    cin >> attack_b >> HP_b;

    while(true)
    {
        HP_a -= attack_b;
        HP_b -= attack_a;

        if(HP_a <= 0 && HP_b <=0) {
            cout << "DRAW";
            break;
        }
        else if (HP_a <= 0) {
            cout << "PLAYER B";
            break;
        }
        else if(HP_b <= 0) {
            cout << "PLAYER A";
            break;
        }
    }

    
    return 0;
}
