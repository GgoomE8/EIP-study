# [정보처리기사 실기 2025년 3회차 이전 유형] 20260211_3
# 문자열 길이 가장 긴 단어 출력하기 (역순이 자신과 다른 구문만)
# 답: racecar

# 문제풀이 코드 작성
def question(text):
    str = ""
    for word in text.split():
        if word == word[::-1]: # 슬라이스 역순 비교
            if len(word) > len(str):
                str = word
    if str:
        print(f"{str}")
    else:
        print("Not Found")

if __name__ == "__main__":
    text = "banana racecar apple madam none civic ciiviic rotor"
    question(text);