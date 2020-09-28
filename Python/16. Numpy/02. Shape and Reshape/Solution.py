# Shape and Reshape
# Problem Link: https://www.hackerrank.com/challenges/np-shape-reshape/problem

import numpy

arr = numpy.array(input().split(), int)
arr.shape = (3, 3)
print(arr)
