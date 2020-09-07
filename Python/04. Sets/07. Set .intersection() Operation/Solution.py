# Set .intersection() Operation
# Problem Link: https://www.hackerrank.com/challenges/py-set-intersection-operation/problem

_, s1, _, s2 = [set(input().split()) for i in range(4)]
print(len(s1 & s2))
