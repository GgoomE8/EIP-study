# [정보처리기사 실기 유형] 20260212_2
# 입력 없음. 아래 코드를 보고, 실행 시 출력되는 문자열을 구하시오.
# (반복문·함수·변수 scope를 추적하여 구한 뒤, 실행으로 확인할 것.)

def solution(num):
    while num > 0:
        digit = num % 10
        if digit == 0 or digit == 1 or digit == 2:
            return 1
        num //= 10
    return 0

if __name__ == "__main__":
    arr = [0] * 20
    size = len(arr)
    result = ""
    for i in range(size):
        arr[i] = i + 1
    for i in range(size):
        if solution(arr[i]):
            result += "x"
        else:
            result += "0"
    print(result)
    pass