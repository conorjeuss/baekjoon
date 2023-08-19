#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

//이분탐색 알고리즘
//target값이 mid값을 기준으로 왼쪽에있는지 오른쪽에 있는지 판별 --> 왼쪽에있으면 right = mid , 오른쪽에 있으면 left = mid 로 바꿔 탐색구간을 좁힘

//(O(N))이 너무커서 조건 부합 x 새로운 알고리즘 필요
int binary_search(int *arr, int size, int target) {
    int left = 0, right = size - 1;
    while(left <= right) {
        int mid = (left + right) / 2;
        if(arr[mid] == target) {
            return mid;
        } else if(arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int N, M;
    scanf("%d", &N);
    int cards[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &cards[i]);
    }

    qsort(cards, N, sizeof(int), compare);

    scanf("%d", &M);
    int queries[M];
    for(int i = 0; i < M; i++) {
        scanf("%d", &queries[i]);
    }

    for(int i = 0; i < M; i++) {
        int count = 0;
        int idx = binary_search(cards, N, queries[i]);
        if(idx != -1) {
            int leftIdx = idx, rightIdx = idx;
            while(leftIdx > 0 && cards[leftIdx-1] == queries[i]) {
                count++;
                leftIdx--;
            }
            while(rightIdx < N-1 && cards[rightIdx+1] == queries[i]) {
                count++;
                rightIdx++;
            }
            count++;
        }
        printf("%d ", count);
    }

    return 0;
}
