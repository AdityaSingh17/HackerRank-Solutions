# Nested Lists
# Problem Link: https://www.hackerrank.com/challenges/nested-list/problem

if __name__ == '__main__':
    li = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        li.append([name,score])

    sh = sorted(set([x[1] for x in li]))
    for name in sorted(x[0] for x in li if x[1] == sh[1]):
        print(name)
