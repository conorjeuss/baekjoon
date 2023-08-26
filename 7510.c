#include<iostream>
#include<math.h>
int main(void)
{
    std::cout << "start\n";

    int n;
    std::cin >> n;
    int cnt = 1;

    while(n>0)
    {
        int arr[3];
        int max = 0;
        int k;
        for(int i=0; i<3; i++)
        {
            scanf("%d",&arr[i]);
            if(max < arr[i]) {
                max = arr[i];
                k = i;
            }
        }

        int c;
        int sum = 0;
        for(int i=0; i<3; i++)
        {
            if(i == k) {
                c = arr[i];
            }
            else {
                arr[i] = pow(arr[i],2);
                sum = sum + arr[i];
            }
        }

        if(sqrt(sum) == c) {
            printf("Scenario #%d:\nyes\n",cnt);
            std::cout << "\n";
        }
        else {
            printf("Scenario #%d:\nno\n",cnt);
            std::cout << "\n";
        }

        cnt++;
        n--;
    }

    return 0;
}
