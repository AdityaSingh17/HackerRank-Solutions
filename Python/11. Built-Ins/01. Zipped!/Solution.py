# https://www.hackerrank.com/challenges/zipped/problem
# Problem Link: Zipped!

n, x = [float(x) for x in input().split()]
score = [map(float, input().split()) for _ in range(int(x))]
for i in zip(*score):
    print(sum(i) / x)
