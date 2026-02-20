/*
 * [풀이] 20260219_1
 *
 * 1) test[] 배열
 *    test[0] = { i=1, g="AB" }
 *    test[1] = { i=2, g="DC" }
 *    test[2] = { i=3, g="EB" }
 *
 * 2) p = &test[1]  →  p는 두 번째 요소를 가리킴
 *    p->i == 2,  p->g == "DC" (첫 글자 'D'를 가리키는 포인터)
 *
 * 3) p->g + (p->i - 1)
 *    = p->g + (2 - 1)
 *    = p->g + 1
 *
 *    포인터 + 정수: 그만큼 뒤로 이동
 *    p->g     → "DC"의 'D' (인덱스 0)
 *    p->g + 1 → "DC"의 'C' (인덱스 1) → 문자열 "C"의 시작 주소
 *
 * 4) printf("%s", "C")  →  출력: C
 */
#include <stdio.h>

struct Test {
    int i;
    const char *g;
};

int main() {
    struct Test test[] = {{1, "AB"}, {2, "DC"}, {3, "EB"}};
    struct Test *p = &test[1];
    printf("%s", p->g + (p->i - 1));
    return 0;
}
