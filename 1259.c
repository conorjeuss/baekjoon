#include<stdio.h>
#include<string.h>
int main() {
    int j, check;
    char value[100000];
    while (scanf("%s", value) && value[0] != '0') {
        check = 1;
        j = strlen(value);  

        for (int i = 0; i < j / 2; i++) {
            if (value[i] != value[j - 1 - i]) {
                check = 0;
                break;
            }
        }
      //문자열의 중간을 기준으로 대칭을 비교하는 알고리즘
      //value[i] != value[j - 1 - i]
        if (check == 1) {
            printf("yes\n");
        }
        else if (check == 0) {
            printf("no\n");
        }
    }
}
