# Set .union() Operation
# Problem Link: https://www.hackerrank.com/challenges/py-set-union/problem

_, s1, _, s2 = [set(input().split()) for i in range(4)]
print(len(s1.union(s2)))
