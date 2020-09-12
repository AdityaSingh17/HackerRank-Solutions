# itertools.product()
# Problem Link: https://www.hackerrank.com/challenges/itertools-product/problem

from itertools import product

listA, listB = [list(map(int, input().split())) for _ in range(2)]
print(*(product(listA, listB)))  # * is used to unpack the list.
