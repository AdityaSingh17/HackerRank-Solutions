# itertools.combinations()
# Problem Link: https://www.hackerrank.com/challenges/itertools-combinations/problem

from itertools import combinations

s, k = input().split()
for i in range(1, int(k) + 1):
    for x in combinations(sorted(s), i):
        print("".join(x))
