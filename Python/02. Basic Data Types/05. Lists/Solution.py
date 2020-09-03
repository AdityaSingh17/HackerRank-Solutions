# Lists
# Problem Link: https://www.hackerrank.com/challenges/python-lists/problem

if __name__ == "__main__":
    l = []

n = int(input())

for i in range(0, n):
    tokens = input().split()

    if tokens[0] == "insert":
        l.insert(int(tokens[1]), int(tokens[2]))
    elif tokens[0] == "print":
        print(l)
    elif tokens[0] == "remove":
        l.remove(int(tokens[1]))
    elif tokens[0] == "append":
        l.append(int(tokens[1]))
    elif tokens[0] == "sort":
        l.sort()
    elif tokens[0] == "pop":
        l.pop()
    elif tokens[0] == "reverse":
        l.reverse()
