# Mod Divmod
# Problem Link: https://www.hackerrank.com/challenges/python-mod-divmod/problem

a, b = [int(input()) for _ in range(2)]
print(a // b, a % b, divmod(a, b), sep="\n")
