def leerElementos
    puts "Escribe los elementos: "
    return gets.scan(/\d+/).map(&:to_i)
end

def calcularPromedio(a)
    prom = 0.0
    a.each do |i|
        prom += i
    end
    return prom / a.length
end

a = leerElementos
print "El promedio es: #{calcularPromedio(a).round(3)} \n"
