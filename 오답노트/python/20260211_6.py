# 문제풀이 코드 작성
# 다음 식의 값을 구하시오.

def solution(terms, x, y):
    result = 0
    for a, b, c in terms:
        term_value = a * (x ** b) * (y ** c) # 지수 계산
        result += term_value
    return result

if __name__ == "__main__":
    data = [
        (3, 2, 1),
        (2, 1, 2),
        (-5, 1, 1),
        (7, 0, 0),
    ]
    x = 2
    y = 3

    result = solution(data, x, y);
    print(f"{result}");

