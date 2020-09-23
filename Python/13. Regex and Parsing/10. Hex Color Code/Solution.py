# Hex Color Code
# Problem Link: https://www.hackerrank.com/challenges/hex-color-code/problem

import re

for i in range(int(input())):
    matches = re.findall(r":?.(#[0-9a-f]{6}|#[0-9a-f]{3})", input(), flags=re.I)
    if matches:
        print(*matches, sep="\n")
