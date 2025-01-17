# Text Wrap
# Problem Link: https://www.hackerrank.com/challenges/text-wrap/problem

import textwrap


def wrap(string, max_width):
    s = ""
    for c in range(0, len(string), max_width):
        s += string[c : c + max_width] + "\n"
    return s


if __name__ == "__main__":
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
