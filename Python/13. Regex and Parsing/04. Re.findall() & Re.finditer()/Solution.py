# Re.findall() & Re.finditer()
# Problem Link: https://www.hackerrank.com/challenges/re-findall-re-finditer/problem

import re

v = "aeiou"
c = "qwrtypsdfghjklzxcvbnm"
print(*re.findall("(?=[%s]([%s]{2,})[%s])" % (c, v, c), input(), re.I) or [-1], sep="\n")
# re.I = flag to ignore case
# c,v,c as v should be between c
# capture only vowels in () whose length is minimum 2
