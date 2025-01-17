# Word Order
# Problem Link: https://www.hackerrank.com/challenges/word-order/problem

from collections import OrderedDict

words = OrderedDict()

for _ in range(int(input())):
    word = input()
    words.setdefault(word, 0)
    words[word] += 1

print(len(words))
print(*words.values())
