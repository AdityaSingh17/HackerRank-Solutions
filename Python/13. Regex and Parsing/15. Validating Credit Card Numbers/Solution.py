# Validating Credit Card Numbers
# Problem Link: https://www.hackerrank.com/challenges/validating-credit-card-number/problem

import re

for _ in range(int(input())):
    S = input().strip()
    pre_match = re.search(r"^[456]\d{3}(-?)\d{4}\1\d{4}\1\d{4}$", S)
    # re.search(r'^[456]\d{3}-?\d{4}\-?\d{4}\-?\d{4}$',S)
    # (-?) is a repeating group \1 indicates that.
    if pre_match:
        processed_string = "".join(pre_match.group(0).split("-"))
        final_match = re.search(r"(\d)\1{3,}", processed_string)  # Repeating groups
        print("Invalid" if final_match else "Valid")
    else:
        print("Invalid")
