# Detect Floating Point Number
# Problem Link: https://www.hackerrank.com/challenges/introduction-to-regex/problem

import re

for _ in range(int(input())):
    regex = "^[+-]?\d*\.{1}\d+$"
    a = input()
    print("True" if re.match(regex, a) else "False")
