from sys import stdin, stdout

def triangular(n):
    return (n * (n + 1)) // 2

def ok(n):
    low = 1
    high = 2 * (10**9)#(aproximadamente)
    while high - low > 1:
        mid = (low + high) // 2
        if triangular(mid) <= n:
            low = mid
        else:
            high = mid
    if triangular(low) == n:
        stdout.write("Go On Bob " + str(low) + "\n")
    else:
        stdout.write("Better Luck Next Time\n")

cases = int(stdin.readline())
for _ in range(cases):
    n = int(stdin.readline())
    ok(n)