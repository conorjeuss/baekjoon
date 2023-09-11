#include<iostream>
#include<cmath>

using namespace std;

int calculateDistance(int a, int b) {
    int ax, ay, bx, by;
    
    ax = (a - 1) / 4;
    ay = (a - 1) % 4;
    bx = (b - 1) / 4;
    by = (b - 1) % 4;
    
    return abs(ax - bx) + abs(ay - by);
}

int main() {
    cout << "start\n";
    
    int a, b;
    cin >> a >> b;
    
    int ans = calculateDistance(a, b);
    
    cout << ans << endl;
    
    return 0;
}
