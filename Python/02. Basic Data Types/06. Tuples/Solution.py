# Tuples
# Problem Link: https://www.hackerrank.com/challenges/python-tuples/problem

if __name__ == "__main__":
    n = int(input())
    x = str(input())
    ls = x.split()
    ls = [int(x) for x in ls]
    tp = tuple(ls)
    print(hash(tp))
