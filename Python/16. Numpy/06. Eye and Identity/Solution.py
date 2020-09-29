# Eye and Identity
# Problem Link: https://www.hackerrank.com/challenges/np-eye-and-identity/problem

import numpy

numpy.set_printoptions(legacy="1.13")
row, col = [int(x) for x in input().split(" ")]
print(numpy.eye(row, col, k=0))
