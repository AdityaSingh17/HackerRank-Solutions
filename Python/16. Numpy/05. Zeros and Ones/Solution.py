# Zeros and Ones
# Problem Link: https://www.hackerrank.com/challenges/np-zeros-and-ones/problem

import numpy

nums = tuple(map(int, input().split()))
print(numpy.zeros(nums, dtype=numpy.int))
print(numpy.ones(nums, dtype=numpy.int))
