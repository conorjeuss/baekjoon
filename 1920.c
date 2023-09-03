#include<stdio.h>
#include<stdlib.h>

/*
이번 문제의 핵심 부분: int형 범위를 잘생각해야함
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b); 
}
이렇게 빼면 int형범위를 초과하는 값이 나와서 int compare 함수에서 return값에 오버플로우 발생가능성있음.
***따라서 아래처럼 두 수를 비교하기만 하면 빼는 일이 없기에 int형 범위를 초과하는 오버플로우가 발생하지 않음.
*/

int compare(const void *a, const void *b)
{
    int int_a = *((int*)a);
    int int_b = *((int*)b);

    if ( int_a < int_b ) return -1;
    else if ( int_a == int_b ) return 0;
    else return 1;
}


void check(int target,int *arr_n,int n)
{
    int max = n-1; //배열의 인덱스를 사용해야함 만약 arr에서 arr[n-1]을 max값으로 두면 mid값이 의도한 대로 안나옴 인덱스를 사용하여 배열을 사용해야함.
    int min = 0; //이하동문
    int mid;

    while(max >= min)
    {
        mid = (max+min)/2;
        if(arr_n[mid] > target) {
            //min = arr_n[0];
            max = mid -1;
        }
        else if(arr_n[mid] < target) {
            min = mid + 1;
            //max = arr_n[n-1];
        }
        else
        {
            printf("1\n");
            return; //return 을 통해 check함수를 종료시킨다 => 이미 발견했으므로 더이상 while문을 포함한 check함수를 사용할 필요가 없기 때문이다.
        }
    }
    printf("0\n");

}

int main(void)
{
    //printf("start\n");

    int n,m;
    scanf("%d",&n);

    int* arr_n = (int*)malloc(sizeof(int) * n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr_n[i]);
    }
    
    qsort(arr_n,n,sizeof(int),compare); //arr_n오름차순 정렬

    scanf("%d",&m);
    int* arr_m = (int*)malloc(sizeof(int) * m);
    for(int j=0; j<m; j++)
    {
        scanf("%d",&arr_m[j]);
        //check(arr_m[j],arr_n,n);
    }

    for(int j=0; j<m; j++)
    {
        check(arr_m[j],arr_n,n);
    }

    free(arr_m);
    free(arr_n);

}
