# Find Angle MBC
# Problem Link: https://www.hackerrank.com/challenges/find-angle/problem

import math

AB, BC = [int(input()) for i in range(2)]
hype = math.hypot(AB, BC)
res = round(math.degrees(math.acos(BC / hype)))
degree = chr(176)  # Degree symbol.
print(res, degree, sep="")
