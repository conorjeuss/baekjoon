#include<iostream>
int main(void)
{
    std::cout << "start\n";

    int n,n2;
    std::cin >> n >> n2;

    int res = (n>n2) ?  n : n2;

    std::cout << res;

    return 0;
}
