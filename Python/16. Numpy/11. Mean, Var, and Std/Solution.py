# Mean, Var, and Std
# Problem Link: https://www.hackerrank.com/challenges/np-mean-var-and-std/problem

import numpy as np

np.set_printoptions(legacy="1.13")
n, m = map(int, input().split())
a = np.array([input().split() for _ in range(n)], float)
print(np.mean(a, axis=1), np.var(a, axis=0), np.std(a), sep="\n")
