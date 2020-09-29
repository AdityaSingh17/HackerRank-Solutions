# Floor, Ceil and Rint
# Problem Link: https://www.hackerrank.com/challenges/floor-ceil-and-rint/problem

import numpy as np

np.set_printoptions(legacy="1.13")
arr = np.array(input().split(), dtype=float)
print(np.floor(arr), np.ceil(arr), np.rint(arr), sep="\n")
