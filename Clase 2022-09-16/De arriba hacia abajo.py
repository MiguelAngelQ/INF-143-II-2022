def f(a, b):
    if a == b - 1:
        return
    print(a)
    f(a - 1, b)
 
if __name__ == "__main__":
    a, b = map(int, input().split())
    f(max(a, b), min(a, b))