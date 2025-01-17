# itertools.combinations_with_replacement()
# Problem Link: https://www.hackerrank.com/challenges/itertools-combinations-with-replacement/problem

from itertools import combinations_with_replacement

s, k = input().split()
for x in combinations_with_replacement(sorted(s), int(k)):
    print("".join(x))
