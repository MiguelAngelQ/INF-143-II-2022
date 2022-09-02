#Dado un numero n, hallar su raiz cuadrada entera
def raiz(n):#raiz cuadrada ,mas a la izquierda
    low = 1                         #1
    high = n + 1                    #1
    while high - low > 1:           #log2(n) + 1
        mid = (low + high) // 2     #log2(n)
        if mid * mid <= n:          #log2(n)
            low = mid               #log2(n)
        else:
            high = mid
    return low                      #1
'''
    t(n) = 1 + 1 + log2(n) + 1 + log2(n) + log2(n) + log2(n) + 1
    t(n) = 4(log2(n)) + 4
    '''

n = int(input()) #1
print(raiz(n))   #4(log2(n)) + 4
'''
t(n) = 1 + 4(log2(n)) + 4
t(n) = 4(log2(n)) + 5
t(n) E O(log(n))
'''