/*
 * [정보처리기사 실기 유형] 20260211_3
 * 출력 결과 표기하기
 * 1, 5, 25
 * 반복문 진행되며 조건문이 배수로 진행됨. 1일때 이후 a+b 값이 배수로 진행됨.
 */

#include <stdio.h>

int main() {
    // 문제풀이 코드 작성
    int a = 4;
    int b = !(!a);
    int i = 0;
    for (i = 1; i< 100; i*= a+b) {
        printf("%d\n", i);
    }

    return 0;
}
