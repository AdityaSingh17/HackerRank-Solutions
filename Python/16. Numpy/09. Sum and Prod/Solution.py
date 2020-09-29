# Sum and Prod
# Problem Link: https://www.hackerrank.com/challenges/np-sum-and-prod/problem

import numpy

n, m = [int(x) for x in input().split()]
arr = numpy.array([input().split() for i in range(n)], dtype=int)
print(numpy.prod((numpy.sum(arr, axis=0))))
