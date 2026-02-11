# [정보처리기사 실기 2025년 3회차 이전 유형] 20260211_3
# 리스트 개념 파이썬은 자바 스크립트가 아님..
# 다음 식의 값을 구하시오.

# 문제풀이 코드 작성
def add_list(item, list = []):
    list.append(item)
    return list

if __name__ == "__main__":
    add_list(1)
    add_list(2);
    result = add_list(3, []);
    add_list(5, result)
    print(len(add_list(4)) + len(result))