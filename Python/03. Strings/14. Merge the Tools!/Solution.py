# Merge the Tools!
# Problem Link: https://www.hackerrank.com/challenges/merge-the-tools/problem


def merge_the_tools(string, k):
    for i in range(0, len(string), k):
        temp = ""
        for j in string[i : i + k]:
            if j not in temp:
                temp += j
        print(temp)


if __name__ == "__main__":
    string, k = input(), int(input())
    merge_the_tools(string, k)
