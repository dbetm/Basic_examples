def toDecimal(binary)
    num = 0
    j = 0
    len = binary.length
    (len - 1).downto(0) do |i|
        if binary[i] == '1'
            num += 2 ** j
        end
        j += 1
    end
    return num
end


print "Escribe el número en binario: "
binario = gets.chomp.to_s
puts "El número es: #{toDecimal(binario)}"
