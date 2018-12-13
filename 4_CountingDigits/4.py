def contarDigitos(n):
    cont = 0
    while n != 0:
        n = n / 10;
        cont = cont + 1;
    return cont

n = int(input(">> n: "))
print(str(n) + " tiene " + str(contarDigitos(n)) + " digito(s).")
