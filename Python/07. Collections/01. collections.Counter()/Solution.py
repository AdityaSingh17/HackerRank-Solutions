# collections.Counter()
# Problem Link: https://www.hackerrank.com/challenges/collections-counter/problem

from collections import Counter

x = int(input())
shoe = map(int, input().split())
cust = int(input())
shoeCollection = Counter(shoe)
money = 0
for i in range(cust):
    size, price = map(int, input().split())
    if shoeCollection[size]:
        money += price
        shoeCollection[size] -= 1

print(money)
