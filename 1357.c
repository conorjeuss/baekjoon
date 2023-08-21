#include <stdio.h>

int Rev(int n) {
    int reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return reversed;
}

//Rev => 숫자를 받아서 거꾸로 돌린 수로 만드는 알고리즘 배열에서 바꾸는 것과는 다름
/*
char형태의 배열 거꾸로하는 알고리즘 
void Rev(char *c, int len)
{
    int a = len / 2;

    for(int i = 0; i < a; i++)
    {
        char temp;
        temp = c[i];
        c[i] = c[len - 1 - i];
        c[len - 1 - i] = temp;
    }
}
*/

int main() {
    int X, Y;
   
    scanf("%d %d", &X, &Y);

    printf("%d\n", Rev(Rev(X) + Rev(Y)));

    return 0;
}
