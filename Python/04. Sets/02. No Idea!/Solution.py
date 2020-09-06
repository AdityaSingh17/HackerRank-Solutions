# No Idea!
# Problem Link: https://www.hackerrank.com/challenges/no-idea/problem

n, m = input().split()
arr = input().split()
A = set(input().split())
B = set(input().split())

print(sum([(i in A) - (i in B) for i in arr]))
