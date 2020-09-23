# HTML Parser - Part 2
# Problem Link: https://www.hackerrank.com/challenges/html-parser-part-2/problem

from html.parser import HTMLParser


class MyHTMLParser(HTMLParser):
    def handle_data(self, data):
        if data != "\n":
            print(">>> Data   ")
            print(data)

    def handle_comment(self, data):
        if len(data.split("\n")) == 1:
            print(">>> Single-line Comment  ")
            print(data)
        elif len(data.split("\n")) > 1:
            print(">>> Multi-line Comment  ",)
            for i in data.split("\n"):
                print(i)


if __name__ == "__main__":
    lis = []
    for _ in range(int(input())):
        lis.append(input())
    html = "\n".join(lis)
    parser = MyHTMLParser()
    parser.feed(html)
