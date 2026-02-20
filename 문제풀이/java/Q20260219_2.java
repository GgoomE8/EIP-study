/*
 * [정보처리기사 실기 유형] 20260219_2
 * 아래 코드를 실행했을 때 출력되는 문자는?
 * (문자열 끝까지 반복하여 길이를 구한 뒤, 길이-2 인덱스의 문자를 출력한다.)
 */
public class Q20260219_2 {
    public static void main(String[] args) {
        String str = "REPUBLICOFKOREA";
        int a = 0;

        while (a < str.length())
            ++a;

        System.out.print(str.charAt(a - 2));
    }
}
