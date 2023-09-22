#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
    int x,y;
    cin >> x >> y;

    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string day[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};

    int total_day = y;

    for(int i=0; i<x-1; i++)
    {
        total_day += month[i];
    }

    int k = total_day % 7;

    if(k == 0)
    {
        cout << day[6];
    }
    else {
        cout << day[k-1];
    }

    return 0;
}
