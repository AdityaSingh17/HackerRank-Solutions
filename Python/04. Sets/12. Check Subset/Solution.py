# Check Subset
# Problem Link: https://www.hackerrank.com/challenges/py-check-subset/problem

for i in range(int(input())):
    asize, a = int(input()), set(map(int, input().split()))
    bsize, b = int(input()), set(map(int, input().split()))
    print(a.issubset(b))
