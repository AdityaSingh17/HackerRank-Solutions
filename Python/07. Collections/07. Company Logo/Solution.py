# Company Logo
# Problem Link: https://www.hackerrank.com/challenges/most-commons/problem

from collections import Counter

s = input()
c = Counter(sorted(s)).most_common(3)
[print(*x) for x in c]
