#!/bin/bash
# 사용법: ./run.sh <파일명>
# 예: ./run.sh 20260211_1.c

if [ -z "$1" ]; then
    echo "사용법: ./run.sh <파일명>"
    echo "예: ./run.sh 20260211_1.c"
    exit 1
fi

SOURCE="$1"
BASE="${SOURCE%.c}"
TARGET="$BASE"

if [ ! -f "$SOURCE" ]; then
    echo "파일을 찾을 수 없습니다: $SOURCE"
    exit 1
fi

gcc -Wall -Wextra -std=c11 -o "$TARGET" "$SOURCE" && ./"$TARGET"
EXIT=$?
rm -f "$TARGET"
exit $EXIT
