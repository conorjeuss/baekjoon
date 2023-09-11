#include<iostream>
#include<math.h>

using namespace std;

int res(int a, int b)
{
    int ax = a / 4;
    int ay = a % 4;
    int bx = b / 4;
    int by = b % 4;

    if(ay == 0 && by != 0)
    {
        ay = 4;
        ax--;
    }
    else if(ay != 0 && by == 0) {
        by = 4;
        bx--;
    }
    else if( ay == 0 && by == 0) {
        ay = 4;
        by = 4;
        ax--;
        bx--;
    } 
  
    int result = abs(ax - bx) + abs(ay - by);

    return result;

}
//주어진 그림을 xy좌표축이라고 생각 --> 4의 배수들을 바꿔주기
int main(void)
{
    cout << "start\n";
    
    int a,b;
    cin >> a >> b;

    int ans = res(a,b);

    printf("%d",ans);

    return 0;
}
