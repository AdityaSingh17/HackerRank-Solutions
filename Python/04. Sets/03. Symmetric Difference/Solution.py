# Symmetric Difference
# Problem Link: https://www.hackerrank.com/challenges/symmetric-difference/problem

m = int(input())
marr = set(map(int, input().split()))
n = int(input())
narr = set(map(int, input().split()))

for x in sorted(marr ^ narr):
    print(x)
