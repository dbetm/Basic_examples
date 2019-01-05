def gcd(a, b):
    return gcd(b, a % b) if b else a

a, b = map(int, input("Escribe a y b: ").strip().split(" "))

print("El máximo común divisor es: " + str(gcd(a, b)), end='\n')
