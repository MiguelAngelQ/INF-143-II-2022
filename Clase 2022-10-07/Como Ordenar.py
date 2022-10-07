from math import factorial

if __name__ == '__main__':
    n = int(input())
    a = [int(x) for x in input().split()]
    dicc = {}
    for i in range(n):
        if a[i] in dicc:
            dicc[a[i]] = dicc[a[i]] + 1
        else:
            dicc[a[i]] = 1
    ans = 1
    for x in dicc:
        ans *= factorial(dicc[x])
    print(ans % 1000000007)