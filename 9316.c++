#include<iostream>
int main(void)
{
    int n;
    std::cin >>n;
    
    int i = 1;
    while(n>0)
    {
        std::cout << "Hello World, Judge " << i << "!\n";
        n--;
        i++;
    }

    return 0;
}
