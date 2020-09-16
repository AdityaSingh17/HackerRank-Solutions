# Exceptions
# Problem Link: https://www.hackerrank.com/challenges/exceptions/problem

for _ in range(int(input())):
    try:
        a, b = [int(x) for x in input().split()]
        print(a // b)
    except Exception as e:
        print("Error Code:", e)
