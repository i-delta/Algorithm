#!/usr/bin/env python3.4

import random

# count the card of set [1...n]
def SetCount(n):
    k = 0
    s =  set()

    a = random.randrange(1, n, 1)

    while a not in s:
        k = k+1
        s.add(a)
        a = random.randrange(1, n, 1)

    return 2*k*k/3.14159




if  __name__ == '__main__':
    n = 100000
    i = 0
    sum = 0
    while i != 100:
        card = SetCount(n)
        sum = sum + card
        i = i+1
    print(sum/i)


