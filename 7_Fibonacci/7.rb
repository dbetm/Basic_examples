def generarElementos(n)
    a = []
    # Se insertan los 2 primeros elementos
    a << 0
    a << 1
    2.upto(n-1) do |i|
        a << a[i - 1] + a[i - 2]
    end
    return a
end

def mostrarSucesion(a, n)
    0.upto(n-1) do |i|
        print "#{a[i]} "
    end
end

print "Número de elementos a generar: "
n = gets.chomp.to_i
a = generarElementos(n)
mostrarSucesion(a, n)
puts
