def factorial(n)
    if n <= 0
        return 1
    else
        return n * factorial(n - 1)
    end
end

puts "Escribe n: "
n = gets.chomp.to_i
ans = factorial(n)
puts "El factorial es: #{ans}"
