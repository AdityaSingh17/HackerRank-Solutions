# Transpose and Flatten
# Problem Link: https://www.hackerrank.com/challenges/np-transpose-and-flatten/problem

import numpy

n, m = [int(x) for x in input().split()]
arr = []
for i in range(n):
    arr.append(numpy.array(input().split(), int))

arr = numpy.array(arr)
print(arr.transpose())
print(arr.flatten())
