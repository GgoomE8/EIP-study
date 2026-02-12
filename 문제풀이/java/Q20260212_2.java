/*
 * [정보처리기사 실기 유형] 20260212_2
 * 입력 없음. 아래 코드를 보고, 실행 시 출력되는 문자열을 구하시오.
 * (반복문·함수·변수 scope를 추적하여 구한 뒤, 실행으로 확인할 것.)
 * xx0000000xxxxxxxxxx
 */
public class Q20260212_2 {
    static int solution(int num) {
        while (num > 0) {
            int digit = num % 10;
            if (digit == 0 || digit == 1 || digit == 2)
                return 1;
            num /= 10;
        }
        return 0;
    }

    public static void main(String[] args) {
        int i;
        int[] arr = new int[20];
        int size = arr.length;
        for (i = 0; i < size; i++)
            arr[i] = i + 1;
        for (i = 0; i < size; i++) {
            if (solution(arr[i]) != 0) System.out.print("x");
            else System.out.print("0");
        }
        System.out.println();
    }
}
