# Incorrect Regex
# Problem Link: https://www.hackerrank.com/challenges/incorrect-regex/problem

import re

for _ in range(int(input())):
    try:
        re.compile(input())
        print("True")
    except:
        print("False")
