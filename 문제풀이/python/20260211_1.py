# [기본 문제] 20260211_1
# 두 정수 A와 B를 입력받아 그 합을 출력하는 프로그램을 작성하시오.
# 입력: 한 줄에 A와 B (공백 구분)
# 출력: 합의 값 (정수)

def solution(A, B):
    return A + B

if __name__ == "__main__":
    A, B = map(int, input().split())
    print(solution(A, B))
