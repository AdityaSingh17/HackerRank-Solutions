# The Minion Game
# Problem Link: https://www.hackerrank.com/challenges/the-minion-game/problem


def minion_game(string):
    vowels = "AEIOU"
    kev = 0
    stu = 0
    for i in range(0, len(string)):
        if string[i] in vowels:
            kev += len(string) - i
        else:
            stu += len(string) - i
    print("Stuart", stu) if stu > kev else print("Kevin", kev) if kev > stu else print("Draw")


if __name__ == "__main__":
    s = input()
    minion_game(s)
