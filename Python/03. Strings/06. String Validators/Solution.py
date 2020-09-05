# String Validators
# Problem Link: https://www.hackerrank.com/challenges/string-validators/problem

if __name__ == "__main__":
    s = input()

    for method in [str.isalnum, str.isalpha, str.isdigit, str.islower, str.isupper]:
        print(any(method(c) for c in s))
