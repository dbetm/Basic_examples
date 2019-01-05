def gcd(a, b)
    return b == 0 ? a : gcd(b, a % b)
end

print "Type a and b: "
a, b = gets.split.map(&:to_i)
puts "The greatest common divisor is: #{gcd(a,b)}"
