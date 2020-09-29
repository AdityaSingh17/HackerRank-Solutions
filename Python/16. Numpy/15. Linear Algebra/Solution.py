# Linear Algebra
# Problem Link: https://www.hackerrank.com/challenges/np-linear-algebra/problem

import numpy

numpy.set_printoptions(legacy="1.13")
n = int(input())
A = numpy.array([input().split() for _ in range(n)], float)
print(round(numpy.linalg.det(A), 2))
