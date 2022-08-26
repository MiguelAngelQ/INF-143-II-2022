def ordenar_ascendente(n):
    nn = 0#aca guarderemos el numeromordenado ascendentemente
    for i in range(9, -1, -1):#9, 8, 7, 6, 5, 4, 3,2 ,1, 0
        aux = n
        while aux > 0:
            dig = aux % 10#sacamos el ultimo digito
            aux //= 10#aux = aux // 10
            if dig == i:
                nn = (nn * 10) + i#componemos
    return nn

def ordenar_descendente(n):
    nn = 0  # aca guarderemos el numeromordenado ascendentemente
    for i in range(0, 10, 1):  # 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
        aux = n
        while aux > 0:
            dig = aux % 10  # sacamos el ultimo digito
            aux //= 10  # aux = aux // 10
            if dig == i:
                nn = (nn * 10) + i  # componemos
    return nn

cases = int(input())
for _ in range(cases):
    n = int(input())
    ans = 0
    while n != 6174:
        n = ordenar_ascendente(n) - ordenar_descendente(n)
        ans += 1
    print(ans)