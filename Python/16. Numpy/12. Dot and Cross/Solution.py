# Dot and Cross
# Problem Link: https://www.hackerrank.com/challenges/np-dot-and-cross/problem

import numpy

a = int(input())
arr1, arr2 = numpy.array([[list(map(int, input().split())) for _ in range(a)] for _ in range(2)])
print(numpy.dot(arr1, arr2))
