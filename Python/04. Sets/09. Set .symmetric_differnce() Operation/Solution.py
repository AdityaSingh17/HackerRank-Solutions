# Set .symmetric_difference() Operation
# Problem Link: https://www.hackerrank.com/challenges/py-set-symmetric-difference-operation/problem

n, ePaper, m, fPaper = [set(map(int, input().split())) for i in range(4)]
print(len(ePaper ^ fPaper))
