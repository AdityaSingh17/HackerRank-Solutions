# Mutations
# Problem Link: https://www.hackerrank.com/challenges/python-mutations/problem


def mutate_string(string, position, character):
    ls = list(string)
    ls[position] = character
    string = ""
    for i in ls:
        string += i
    return string


if __name__ == "__main__":
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)
