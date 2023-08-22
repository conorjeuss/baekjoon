#include <stdio.h>
#include<stdlib.h>
int main() {

    int x;
    scanf("%d", &x);

    int n = 0, sum = 0;
    
    while (sum < x)
    {
        n++;
        sum = sum + n;
    }

    int t = sum - x;
    int upper_num;
    int lower_num;

    if (n % 2 == 0)
    {
        upper_num = n - t;
        lower_num = 1 + t;
    }
    else {
        upper_num = 1 + t;
        lower_num = n - t;
    }

    printf("%d/%d\n", upper_num, lower_num);



    return 0;
}
