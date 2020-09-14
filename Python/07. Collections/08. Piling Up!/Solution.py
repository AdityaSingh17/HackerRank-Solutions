# Piling Up!
# Problem Link: https://www.hackerrank.com/challenges/piling-up/problem

for _ in range(int(input())):
    m, l = int(input()), [int(x) for x in input().split()]
    left = True
    valid = True

    for x in range(1, m):
        if left:
            if l[x] > l[x - 1]:
                left = False
        else:
            if l[x] < l[x - 1]:
                valid = False

    print("Yes" if valid else "No")
