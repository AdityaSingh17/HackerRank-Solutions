# itertools.permutations()
# Problem Link: https://www.hackerrank.com/challenges/itertools-permutations/problem

from itertools import permutations

s, k = input().split()
for x in sorted(permutations(s, int(k))):
    print("".join(x))
