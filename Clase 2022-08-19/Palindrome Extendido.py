def is_palindrome(v, n):  # cadena, tamanio
    for i in range(n // 2):
        if v[i] != v[n - i - 1]:
            return False
    return True

while True:
    s = input().strip()
    n = len(s)
    if s == 'END':
        break
    i = 0
    while True:
        if is_palindrome(s[i : n], n - i):
            break
        i += 1
    noPal = s[0 : i]
    print(s + noPal[::-1])
