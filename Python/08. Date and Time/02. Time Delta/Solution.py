# Time Delta
# Problem Link: https://www.hackerrank.com/challenges/python-time-delta/problem

from datetime import datetime as dt

dateformat = "%a %d %b %Y %H:%M:%S %z"
for i in range(int(input())):
    print(int(abs((dt.strptime(input(), dateformat) - dt.strptime(input(), dateformat)).total_seconds())))
