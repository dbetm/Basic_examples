def contarDigitos(n)
    cont = 0
    while n != 0
        n = n / 10
        cont += 1
    end
    return cont
end

print ">> n: "
n = gets.chomp.to_i
puts "#{n} tiene #{contarDigitos(n)} dígito(s)"
