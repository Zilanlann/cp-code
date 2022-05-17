def yzh(n):
    s = 0
    for i in range(1, n//2+1):
        if n % i == 0:
            s += i
    return s


for i in range(1, 10000):
    if i == yzh(i):
        print(i)
