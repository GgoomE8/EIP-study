# Java 문제풀이

## 실행할 파일 하나만 실행 (권장)

문제 풀이 파일이 여러 개여도 **지정한 클래스 하나만** 컴파일 후 실행합니다.  
(해당 클래스에 `public static void main(String[] args)` 가 있어야 합니다.)

```bash
./run.sh Q20260211_1.java
# 또는 확장자 없이
./run.sh Q20260211_1
```

실행이 끝나면 생성된 `.class` 파일은 자동으로 삭제됩니다.

## 기타

### Main.java만 실행
```bash
./compile.sh
```

### 직접 컴파일 및 실행
```bash
javac Q20260211_1.java
java Q20260211_1
```

