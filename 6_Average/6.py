def leerElementos():
    print("Escribe los elementos: ")
    return list(map(int, input().split()))

def calcularPromedio(a):
    prom = 0
    for i in range(len(a)):
        prom = prom + a[i]
    return prom / len(a)

a = leerElementos()
print("El promedio es: " + str(calcularPromedio(a)) + "\n")
