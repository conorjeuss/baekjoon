#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main(void)
{
    int test_case;
    cin >> test_case;

    deque<int> d;

    while(test_case--)
    {
        string command;
        cin >> command;

        if(command == "push_front") {
            int num;
            cin >> num;
            d.push_front(num);
        }
        if(command == "push_back") {
            int num;
            cin >> num;
            d.push_back(num);
        }
        if(command == "pop_front") {
            if(d.empty()) {
                cout << "-1\n";
            }
            else {
                cout << d.front() << "\n";
                d.pop_front();        
            }
        }
        if(command == "pop_back") {
            if(d.empty()) {
                cout << "-1\n";
            }
            else {
                cout << d.back() << "\n";
                d.pop_back();        
            }
        }
        if(command == "size") {
            cout << d.size() << "\n";
        }
        if(command == "empty") {
            if(d.empty()) {
                cout << "1\n";
            }
            else {
                cout << "0\n";
            }
        }
        if(command == "front") {
            if(d.empty()) {
                cout << "-1\n";
            }
            else {
                cout << d.front() << "\n";
            }
        }
        if(command == "back") {
            if(d.empty()) {
                cout << "-1\n";
            }
            else {
                cout << d.back() << "\n";
            } 
            
        }
    }
    return 0;
}
