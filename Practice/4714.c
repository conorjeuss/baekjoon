#include<stdio.h>
int main(void)
{
    float weight;
    float less_weight;

    while(1)
    {
        scanf("%f",&weight);
        if(weight < 0) {
            return 0;
        }
        less_weight = weight * 0.167;
        printf("Objects weighing %.2f on Earth will weigh %.2f on the moon.\n",weight,less_weight);
    }
}
