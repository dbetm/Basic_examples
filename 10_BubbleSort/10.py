def ordenarBurbuja(a):
    for i in range(len(a)):
        for j in range(len(a) - 1):
            if(a[j] > a[j + 1]):
                a[j], a[j + 1] = a[j + 1], a[j] # swap

print("Escribe los elementos separados por un espacio: ", end="")
a = list(map(int, input().split()))
ordenarBurbuja(a)
print(a[:])
