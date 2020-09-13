# Compress the String!
# Problem Link: https://www.hackerrank.com/challenges/compress-the-string/problem

from itertools import groupby

sequence = input()
groups = [(len(list(c)), int(s)) for s, c in groupby(sequence)]
print(*groups)  # unpack the list of tuple pairs and print.
