# Set .discard(), .remove() & .pop()
# Problem Link: https://www.hackerrank.com/challenges/py-set-discard-remove-pop/problem

n = int(input())
s = set(map(int, input().split()))
N = int(input())
for i in range(N):
    cmd = input()
    s.pop() if cmd[0] == "p" else s.remove(int(cmd[-1])) if cmd[0] == "r" else s.discard(int(cmd[-1]))

print(sum(s))
