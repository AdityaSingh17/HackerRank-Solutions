# Map and Lambda Function
# Problem Link: https://www.hackerrank.com/challenges/map-and-lambda-expression/problem

# Complete the lambda function below.
cube = lambda x: x ** 3

# Complete the definition below.
def fibonacci(n):
    fibo = [0, 1]
    for i in range(1, n):
        fibo.append(fibo[i] + fibo[i - 1])
    return fibo[0:n]


if __name__ == "__main__":
    n = int(input())
    print(list(map(cube, fibonacci(n))))
