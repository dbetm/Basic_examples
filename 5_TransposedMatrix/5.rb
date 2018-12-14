def leerMatriz(n)
    a = Array.new(n) { Array.new(n) } # square matrix
    0.upto(n-1) do |i|
        b = gets.scan(/\d+/).map(&:to_i)
        a[i] = b
    end
    return a
end

def transponerMatriz(a)
    n = a.length
    b = []
    i = 0
    while i < n
        b[i] = []
        j = 0
        while j < n
            b[i] << a[j][i]
            j += 1
        end
        i += 1
    end
    return b
end

def mostrarMatriz(a)
    a.each do |i|
        i.each do |j|
            print("#{j} ")
        end
        puts
    end
end

print "Escribe el orden de la matriz: "
n = gets.chomp.to_i
a = leerMatriz(n)
puts "La matriz transpuesta es: "
x = transponerMatriz(a)
mostrarMatriz(x)
