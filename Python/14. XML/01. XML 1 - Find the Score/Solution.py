# XML 1 - Find the Score
# Problem Link: https://www.hackerrank.com/challenges/xml-1-find-the-score/problem

import sys
import xml.etree.ElementTree as etree


def get_attr_number(node):
    # your code goes here
    return sum(len(elem.attrib) for elem in root.iter())


if __name__ == "__main__":
    sys.stdin.readline()
    xml = sys.stdin.read()
    tree = etree.ElementTree(etree.fromstring(xml))
    root = tree.getroot()
    print(get_attr_number(root))
