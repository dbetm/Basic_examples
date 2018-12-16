def generarElementos(n):
    # Agregar los 2 primeros elementos
    a = []
    a.append(0)
    a.append(1)
    for i in range(2, n):
        a.append(a[i - 1] + a[i - 2])
    return a

def mostrarSucesion(a, n):
    for i in range(0, n):
        print(str(a[i]), end=" ")
    print("\n")

n = int(input("# de elementos a generar (n >= 1): "))
a = generarElementos(n)
mostrarSucesion(a, n)
