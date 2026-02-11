#!/bin/bash
# 사용법: ./run.sh <파일명 또는 클래스명>
# 예: ./run.sh Q20260211_1.java  또는  ./run.sh Q20260211_1

if [ -z "$1" ]; then
    echo "사용법: ./run.sh <파일명 또는 클래스명>"
    echo "예: ./run.sh Q20260211_1.java"
    exit 1
fi

ARG="$1"
# .java 확장자면 제거해서 클래스명으로
if [[ "$ARG" == *.java ]]; then
    CLASS="${ARG%.java}"
    FILE="$ARG"
else
    CLASS="$ARG"
    FILE="${ARG}.java"
fi

if [ ! -f "$FILE" ]; then
    echo "파일을 찾을 수 없습니다: $FILE"
    exit 1
fi

javac "$FILE" && java "$CLASS"
EXIT=$?
rm -f "${CLASS}.class"
exit $EXIT
