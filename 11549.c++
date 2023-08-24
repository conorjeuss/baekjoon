#include<iostream>
int main(void)
{
    std::cout << "start\n";

    int n;
    std::cin >> n;

    int arr[5];
    int cnt = 0;
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] == n)
        {
            cnt++;
        }
    }

    std::cout << cnt;

    return 0;
}
