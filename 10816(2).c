#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// 특정 값이 시작되는 첫 번째 위치를 반환
int lower_bound(int *arr, int size, int target) {
    int left = 0, right = size;
    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return right;
}

// 특정 값이 끝나는 마지막 위치를 반환
int upper_bound(int *arr, int size, int target) {
    int left = 0, right = size;
    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return right;
}

int main() {
    int N, M;
    scanf("%d", &N);
    int cards[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &cards[i]);
    }

    qsort(cards, N, sizeof(int), compare);

    scanf("%d", &M);
    int queries[M];
    for (int i = 0; i < M; i++) {
        scanf("%d", &queries[i]);
    }

    for (int i = 0; i < M; i++) {
        int lower = lower_bound(cards, N, queries[i]);
        int upper = upper_bound(cards, N, queries[i]);
        printf("%d ", upper - lower);
    }

    return 0;
}
