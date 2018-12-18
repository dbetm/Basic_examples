def convertirADecimal(binario):
    num = 0
    j = 0
    for i in range(len(binario)):
        if(binario[-(i+1)] == '1'):
            num += 2 ** j
        j = j + 1
    return num

binario = str(input("Escribe el número: "))
print("El número es %d" % convertirADecimal(binario))
