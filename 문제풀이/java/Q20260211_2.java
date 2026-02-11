/*
 * [기본 문제] 20260211_2
 * 두 정수 A와 B를 입력받아 그 곱을 출력하는 프로그램을 작성하시오.
 * 입력: 한 줄에 A와 B (공백 구분)
 * 출력: 곱의 값 (정수)
 */
import java.util.*;

public class Q20260211_2 {
    public static int solution(int A, int B) {
        return A * B;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        System.out.println(solution(A, B));

        sc.close();
    }
}
