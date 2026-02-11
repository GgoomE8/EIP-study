/*
 * 다음 식의 값을 구하시오
 * DEAPOF
 */
import java.util.*;

class A {
    void speak() throws RuntimeException {
        System.out.print("A");
        throw new RuntimeException();
    }
}
class B extends A {
    @Override
    void speak() throws ArithmeticException {
        System.out.print("D");
        throw new ArithmeticException();
    }
}
public class Q20260211_3 {
    public static void main(String[] args) {
        // 문제풀이 코드 작성
        A a = new B();
        try {
            a.speak();
        } catch (ArithmeticException e) {
            System.out.print("EA");
        } catch (NullPointerException e) {
            System.out.print("U");
        } catch (RuntimeException e) {
            System.out.print("EE");
        } finally {
            System.out.print("P");
        }
        System.out.println("OF");
    }
}
