#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    //int* A = (int*)malloc(sizeof(int) * N);
    int A[N];

    for(int i=0; i<N; i++) {
        scanf("%d", &A[i]);
    }

    qsort(A, N, sizeof(int), compare); 

    int start = 0, end = 1;
    int min_diff = 2e9; 

    while(end < N) {
        int diff = A[end] - A[start];
        
        if(diff >= M) {
            if(diff < min_diff) {
                min_diff = diff;
            }
            start++;
        } else {
            end++;
        }
    }

    printf("%d\n", min_diff);

    free(A);

    return 0;
}