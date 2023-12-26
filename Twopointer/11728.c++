#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N,M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);

    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }

    for(int i=0; i<M; i++) {
        cin >> B[i];
    }

    int a_pnt = 0;
    int b_pnt = 0;

    vector<int> merge_res; //합쳐진 배열

    while(a_pnt < N && b_pnt < M)
    {
        if(A[a_pnt] < B[b_pnt]) {
            merge_res.push_back(A[a_pnt]);
            a_pnt++;
        }
        else {
            merge_res.push_back(B[b_pnt]);
            b_pnt++;
        }
    }

    while(a_pnt < N)
    {
        merge_res.push_back(A[a_pnt++]);
    }
    while(b_pnt < M)
    {
        merge_res.push_back(B[b_pnt++]);
    }

    for(int num : merge_res)
    {
        cout << num << " ";
    }

    return 0;
}
