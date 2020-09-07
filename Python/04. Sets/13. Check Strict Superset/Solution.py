# Check Strict Superset
# Problem Link: https://www.hackerrank.com/challenges/py-check-strict-superset/problem

A = set(map(int, input().split()))
ans = []
for i in range(int(input())):
    ans.append(A.issuperset(set(map(int, input().split()))))
print(all(ans))
