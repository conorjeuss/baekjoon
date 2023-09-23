#include<stdio.h>
#include<string.h>
int main(void)
{
    char can[2000];
    char need[2000];

    scanf("%s",can);
    scanf("%s",need);

    int len_can = strlen(can);
    int len_need = strlen(need);
    
    if(len_can >= len_need) {
        printf("go\n");
    }
    else {
        printf("no\n");
    }

    return 0;
}
