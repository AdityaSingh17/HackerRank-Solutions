# HTML Parser - Part 1
# Problem Link: https://www.hackerrank.com/challenges/html-parser-part-1/problem

from html.parser import HTMLParser


class MyHTMLParser(HTMLParser):
    def handle_starttag(self, tag, attrs):
        print("Start :", tag)
        for ele in attrs:
            print("->", ele[0], ">", ele[1])

    def handle_endtag(self, tag):
        print("End   :", tag)

    def handle_startendtag(self, tag, attrs):
        print("Empty :", tag)
        for ele in attrs:
            print("->", ele[0], ">", ele[1])


MyParser = MyHTMLParser()
MyParser.feed("".join([input().strip() for _ in range(int(input()))]))
