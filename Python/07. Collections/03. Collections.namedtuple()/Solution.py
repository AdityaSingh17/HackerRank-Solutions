# Collections.namedtuple()
# Problem Link: https://www.hackerrank.com/challenges/py-collections-namedtuple/problem

from collections import namedtuple

num_of_students = int(input())
Student = namedtuple("Student", input().split())
sum_marks = 0

for i in range(num_of_students):
    values = Student(*input().split())
    sum_marks += int(values.MARKS)

print("%.2f" % (sum_marks / num_of_students))
