#include <stdio.h>

int main() {
    int K, N;
    scanf("%d %d", &K, &N);

    long long arr[K];
    long long high = 0;
    for(int i = 0; i < K; i++) {
        scanf("%lld", &arr[i]);
        if(arr[i] > high) {
            high = arr[i];
        }
    }

    long long res = 0;
    long long low = 1;

    //이분탐색알고리즘 
    while(low <= high) {
        long long mid = (low + high) / 2;
        long long count = 0;

        for(int i = 0; i < K; i++) {
            count += arr[i] / mid;
        } 

        if(count >= N) { //count 가 N보다 크거나 같을때 더 크게 만들 수 있기때문에 low = mid + 1을 실행
            if(mid > res) { // mid 가 이전 결과값 res보다 크면 최댓값(res)를 mid로 갱신한다.
                res = mid;
            }
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("%lld\n", res);
    return 0;
}
