def ordenarBurbuja(a)
    0.upto(a.length - 1) do |i|
        0.upto(a.length - 2) do |j|
            if a[j] > a[j+1]
                aux = a[j]
                a[j] = a[j + 1]
                a[j + 1] = aux
            end
        end
    end
end

puts "Escribe los elementos separados por un espacio: "
a = gets.scan(/\d+/).map(&:to_i)
ordenarBurbuja(a)
print a
