import java.util.*;

public class Q20260217_1 {
    public interface F {
        int app(int x) throws Exception;
    }

    public static int run(F f) {
        try {
            return f.app(3);
        } catch (Exception e) {
            return 7;
        }
    }

    public static void main(String[] args) {
        F f =  (x) -> {
            if (x > 0) throw new Exception();
            else {
                return x * 2;
            }
        };
        System.out.println(run(f) + run(n -> n+9));
    }
}

