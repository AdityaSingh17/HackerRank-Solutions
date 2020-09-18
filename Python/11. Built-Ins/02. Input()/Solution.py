# Input()
# Problem Link: https://www.hackerrank.com/challenges/input/problem

X, k = map(int, input().split())
p = input().replace("x", str(X))
print(eval(p) == k)
