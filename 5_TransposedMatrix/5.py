def leerMatriz(n):
    a = []
    for i in range(0, n):
        b = list(map(int, input().split()))
        a.append(b)
    return a;

def transponerMatriz(a):
    n = len(a)
    b = [[0 for x in range(n)] for y in range(n)]
    for i in range(0, n):
        for j in range(0, n):
            b[j][i] = a[i][j]
    return b


def mostrarMatriz(a):
    n = len(a)
    for i in range(0, n):
        for j in range(0, n):
            print(a[i][j], end=" ")
        print("")

n = int(input("Escribe el orden de la matriz: "))

a = leerMatriz(n)
print("\nLa matriz transpuesta es: \n")
a = transponerMatriz(a)
mostrarMatriz(a)
