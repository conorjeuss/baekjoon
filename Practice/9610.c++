#include<iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int q1,q2,q3,q4,axis;
    q1 = 0;
    q2 = 0;
    q3 = 0;
    q4 = 0;
    axis = 0;

    while(n--)
    {
        int x,y;
        cin >> x >> y;

        if(x == 0 || y == 0) {
            axis++;
        }
        else if(x > 0 && y > 0) {
            q1++;
        }
        else if(x < 0 && y > 0) {
            q2++;
        }
        else if(x < 0 && y < 0) {
            q3++;
        }
        else if(x > 0 && y < 0) {
            q4++;
        }
    }

    printf("Q1: %d\n",q1);
    printf("Q2: %d\n",q2);
    printf("Q3: %d\n",q3);
    printf("Q4: %d\n",q4);
    printf("AXIS: %d\n",axis);

    return 0;
}
