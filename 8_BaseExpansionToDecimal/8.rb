def convertirADecimal(binario)
    num = 0
    j = 0
    longitud = binario.length
    (longitud - 1).downto(0) do |i|
        if binario[i] == '1'
            num += 2 ** j
        end
        j += 1
    end
    return num
end


print "Escribe el número en binario: "
binario = gets.chomp.to_s
puts "El número es: #{convertirADecimal(binario)}"
