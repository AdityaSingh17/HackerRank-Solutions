# Inner and Outer
# Problem Link: https://www.hackerrank.com/challenges/np-inner-and-outer/problem

import numpy

A, B = [numpy.array(input().split(), int) for _ in range(2)]
print("\n".join(str(op(A, B)) for op in (numpy.inner, numpy.outer)))
