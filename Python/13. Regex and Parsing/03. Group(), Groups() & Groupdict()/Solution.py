# Group(), Groups() & Groupdict()
# Problem Link: https://www.hackerrank.com/challenges/re-group-groups/problem

import re

m = re.search(r"([a-zA-Z0-9])\1+", input().strip())
# \1 matches the same text as most recently matched by the 1st capturing group
print(m.group(1) if m else -1)
