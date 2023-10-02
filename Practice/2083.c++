#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    while(1)
    {
        string name;
        int age,weight;

        cin >> name >> age >> weight;

        if(name == "#" && age == 0 && weight == 0) {
            break;
        }

        if(age > 17 || weight >= 80) {
            cout << name << ' ' << "Senior\n";
        }
        else {
            cout << name << ' ' << "Junior\n";
        }
    }

    return 0;
}
