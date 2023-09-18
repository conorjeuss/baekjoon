#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>

using namespace std;

int compare(const void *a, const void *b)
{
    int int_a = *((int*)a);
    int int_b = *((int*)b);

    if ( int_a < int_b ) return -1;
    else if ( int_a == int_b ) return 0;
    else return 1;
}

void binary_search(int target,int &cnt, int *arr_b,int B) //cnt의 주솟값을 전달하여 외부에있는 cnt값을 변화시킴
{
    int min = 0;
    int max = B - 1;
    int mid;

    while(min <= max) {
        mid = (min + max) / 2;

        if(arr_b[mid] == target) {
            cnt = cnt - 2;
            return;        
        }
        else if(arr_b[mid] > target) {
            max = mid - 1;
        }
        else if(arr_b[mid] < target) {
            min = min + 1;
        }
    }

}

int main(void)
{
    int A,B;
    cin >> A >> B;

    if(B>A) {
        swap(A,B); //algorithm 헤더파일
    }

    vector<int> arr_a(A,0);
    vector<int> arr_b(B,0);

    for(int i=0; i<A; i++)
    {
        cin >> arr_a[i];
    }
    for(int j=0; j<B; j++)
    {
        cin >> arr_b[j];
    }

    qsort(&arr_a[0], A, sizeof(int), compare); //&주솟값을 줘야함
    qsort(&arr_b[0], B, sizeof(int), compare);

    int cnt = A + B;
    for(int i=0; i<A; i++)
    {
        binary_search(arr_a[i],cnt,&arr_b[0],B);
    }

    cout << cnt;

    return 0;
}

//그러나 시간초과로 문제해결불가 다른방법 찾아야함
