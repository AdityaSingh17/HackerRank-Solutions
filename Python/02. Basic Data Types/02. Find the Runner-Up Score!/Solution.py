# Find the Runner-Up Score!
# Problem Link: https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem

if __name__ == "__main__":
    n = int(input())
    x = list(map(int, input().split()))
    x.sort(reverse=True)
    key = x[0]
    while key in x:
        x.remove(key)
    print(x[0])
