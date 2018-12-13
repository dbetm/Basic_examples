def mostrarTablasMultiplicar
    1.upto(10) do |i|
        1.upto(10) do |j|
            puts "#{i} x #{j} = #{i*j}"
        end
        puts "\n"
    end
end

mostrarTablasMultiplicar
