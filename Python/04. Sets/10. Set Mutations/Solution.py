# Set Mutations
# Problem Link: https://www.hackerrank.com/challenges/py-set-mutations/problem

A = int(input())
s1 = set(map(int, input().split()))
for i in range(int(input())):
    cmd = input().split()[0]
    stemp = set(map(int, input().split()))
    getattr(s1, cmd)(stemp)

print(sum(s1))
