#include <stdio.h>

int main(void)
{
    long long x, y;
    scanf("%lld %lld", &x, &y);
    long long og_res = (y * 100) / x;
    long long low = 0, high = 1e9, mid, ans = -1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        long long new_res = ((y + mid) * 100) / (x + mid);
        if(og_res < new_res)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    printf("%lld\n", ans);
    return 0;
}
