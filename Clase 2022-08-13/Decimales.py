from math import floor

def is_prime(n):
  if n <= 1:
    return False;
  if n == 2:
    return True
  if n % 2 == 0:
    return False;
  i = 3
  while i * i <= n:
    if n % i == 0:
      return False;
    i += 2 #i = i + 2
  return True

cases = int(input())
for _ in range(cases):
  n = int(input())
  if is_prime(n):
    p = 10
    print("{}: ".format(n), end = "")
    for i in range(40):
      decimal = floor(p / n)
      print(decimal, end = " ")
      p = p - (decimal * n)
      p *= 10
    print()
  else:
    print("{}: {}".format(n, -1))