#include<stdio.h>
int main(void)
{
    int n;
    scanf("%d",&n);

    /*
    DP(Dynamic Programming)의 기본적인 코드 --> 배열에다가 값을 저장하여 시간 복잡도 O(n) 을 줄일 수 있음
    bottom - up 의 문제 해결방식 => 작은 부분을 답을 구하고 결과를 이용해 큰 문제도 해결가능함 - 주로 반복문 사용
    top - down 방식 : 작은 부분문제로 문제를 나누어 부분문제의 답을 저장. 이후 저장된 값을 참조하여 답이 필요할때마다 사용 - 주로 재귀적인 구조
    */
    int arr[100];
    arr[0] = 0;
    arr[1] = 1;
    for(int i=2; i<=n; i++)
    {
        arr[i] = arr[i-2] + arr[i-1];
    }

    printf("%d",arr[n]);

    return 0;
}
