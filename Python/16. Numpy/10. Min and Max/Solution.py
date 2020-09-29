# Min and Max
# Problem Link: https://www.hackerrank.com/challenges/np-min-and-max/problem

import numpy as np

m = int(input().split()[0])
matrix = np.array([input().split() for _ in range(m)], int)
print(np.max(np.min(matrix, axis=1)))
