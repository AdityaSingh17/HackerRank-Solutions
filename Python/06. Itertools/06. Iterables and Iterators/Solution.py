# Iterables and Iterators
# Problem Link: https://www.hackerrank.com/challenges/iterables-and-iterators/problem

from itertools import combinations

N = int(input())
List = input().split()
K = int(input())
Comb = list(combinations(List, K))
F = filter(lambda c: "a" in c, Comb)
print("{0:.3}".format(len(list(F)) / len(Comb)))
