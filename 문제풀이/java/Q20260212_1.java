/*
 * 다음 출력되는 값을 입력하시오
    2
 */

public class Q20260212_1 {
    static void func(int[] a) {
        a[0]++;
        a = new int[5];
        a[0]++;
    }
    public static void main(String[] args) {
        int[] arr =  {1, 2, 3};
        func(arr);
        System.out.println(arr[0]);
    }
}
