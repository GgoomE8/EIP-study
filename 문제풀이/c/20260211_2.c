/*
 * [기본 문제] 20260211_2
 * 두 정수 A와 B를 입력받아 그 곱을 출력하는 프로그램을 작성하시오.
 * 입력: 한 줄에 A와 B (공백 구분)
 * 출력: 곱의 값 (정수)
 */

#include <stdio.h>

int solution(int A, int B) {
    return A * B;
}

int main(void) {
    // 문제풀이 코드 작성
    int A,B;
    scanf("%d %d", &A, &B);
    printf("%d\n", solution(A,B));
    return 0;
}
