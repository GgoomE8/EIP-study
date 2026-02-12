/*
 * [정보처리기사 실기 유형] 20260212_2
 * 입력 없음. 아래 코드를 보고, 실행 시 출력되는 result의 값을 구하시오.
 * (반복문과 변수 scope를 추적하여 구한 뒤, 실행으로 확인할 것.)
 * xxx0000000xxxxxxxxxx
 * 틀림 20260212
 */
#include <stdio.h>
int solution(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0 || digit == 1 || digit == 2)
            return 1;
        num /= 10;
    }
    return 0;
}
int main(void) {
    int i;
    int arr[20];
    int size = sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i < size; i++)
        arr[i] = i + 1;
    for (i = 0; i < size; i++) {
        if (solution(arr[i])) printf("x");
        else printf("0");
    }
    printf("\n");
    return 0;
}
