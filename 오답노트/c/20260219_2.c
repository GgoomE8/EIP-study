/*
 * [정보처리기사 실기 유형] 20260219_2
 * 아래 코드를 실행했을 때 출력되는 문자는?
 * (문자열 끝까지 반복하여 길이를 구한 뒤, 길이-2 인덱스의 문자를 출력한다.)
 */
#include <stdio.h>

struct Node {
    struct Node* next;
    unsigned int x;
};

int main() {
    struct Node t1 = { 0, 5u };
    struct Node t2 = { 0, 7u };
    struct Node t3 = { 0, 11u };

    t3.next = &t2;
    t2.next = &t1;

    struct Node* curr = &t3;
    int sum = 0;

    while (curr) {
        sum = sum * 3 + curr->x;
        curr = curr->next;
    }

    // u = unsigned 리터럴 (부호 없는 정수 타입)
    // ^ = 비트 XOR (지수가 아님! 지수는 pow())
    // sum=125 → 125^42 = 87 (XOR) → 87+100 = 187
    sum = (sum ^ 42u) + 100u; // 1111101 ^ 0101010 = 1010111 =


    printf("%u\n", sum);
}
