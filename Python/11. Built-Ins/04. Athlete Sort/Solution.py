# Athlete Sort
# Problem Link: https://www.hackerrank.com/challenges/python-sort-sort/problem

import math
import os
import random
import re
import sys


if __name__ == "__main__":
    N, M = map(int, input().split())
    j = [[int(x) for x in input().split()] for i in range(N)]
    k = int(input())
    j.sort(key=lambda row: row[k])
    for m in j:
        print(*m)
