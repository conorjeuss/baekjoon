#include <stdio.h>

int main() {

    int startHour, startMinute, startSecond;
    int nowHour, nowMinute, nowSecond;
    int endHour, endMinute, endSecond;
    
    printf("start\n");
    
    scanf("%d:%d:%d", &nowHour, &nowMinute, &nowSecond);
    scanf("%d:%d:%d", &startHour, &startMinute, &startSecond);


    // 초단위로 모든 시간을 계산 ==> 시/분/초 단위로 계산을 따로하면 경우의수가 너무 많음 ==> 단위가 다를때는 단위 통일도 좋은 방법
    int startTimeInSeconds = startHour * 3600 + startMinute * 60 + startSecond;
    int nowTimeInSeconds = nowHour * 3600 + nowMinute * 60 + nowSecond;

    int res;

    if (nowTimeInSeconds < startTimeInSeconds) {
        res = startTimeInSeconds - nowTimeInSeconds;
    } else { 
        res = 24 * 3600 - (nowTimeInSeconds - startTimeInSeconds);
    }

    endHour = res / 3600;
    res %= 3600;
    endMinute = res / 60;
    res = res % 60;
    endSecond = res / 1;

    printf("%02d:%02d:%02d\n", endHour, endMinute, endSecond);
    
    /*
    "%02d:%02d:%02d\n" ==> 정수형 변수를 나타낼때 사용하는 %d앞에 02를 붙여준다
    여기서 
    '2'가 나타내는 것 : 최소로 출력할 너비. (결국 남으면 0을 출력하고 지정너비 이상이면 그대로 출력함)
    '0'이 나타내는 것 : 만약 지정한 너비 2보다 출력값이 작을경우 빈 공간을 0으로 채운다
    
    1.%5d -> 너비가 5인상태로 출력함 만약 출력값이 23이라면 앞에 공백이 3개가 주어지고 42가 출력됨  --> "   42"
    2.%03d -> 너비 3이고 출력값 앞에 공백을 0으로 채움 --> "023" , "001" 
    3.%03d 로 쓴후 출력값이 12345면 최소출력 너비보다 넓기에 공백이 없고 그대로 "12345" 출력된다.
    4.공백을 0으로 채우는 것 외에 다른 숫자로는 채울 수 없음.
    */
    
    
    return 0;
}
