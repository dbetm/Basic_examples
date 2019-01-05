def bubbleSort(a)
    # Basically compares all with all
    0.upto(a.length - 1) do |i|
        0.upto(a.length - 2) do |j|
	    # Upward
            if a[j] > a[j+1]
		# Swap
                aux = a[j]
                a[j] = a[j + 1]
                a[j + 1] = aux
            end
        end
    end
end

puts "Escribe los elementos separados por un espacio: "
a = gets.scan(/\d+/).map(&:to_i)
bubbleSort(a)
print a
