class User
    def initialize()
        @nombre = "desconocido"
        @apellido = "desconocido"
        @edad = -1
        @isAdmin = false
    end

    def initialize(nombre, apellido, edad, isAdmin)
        @nombre = nombre
        @apellido = apellido
        @edad = edad
        @isAdmin = isAdmin
    end

    def nombre
        @nombre
    end

    def nombre=(nombre)
        @nombre = nombre
    end

    def apellido
        @apellido
    end

    def apellido=(apellido)
        @apellido = apellido
    end

    def edad
        @edad
    end

    def edad=(edad)
        @edad = edad
    end

    def isAdmin
        @isAdmin
    end

    def isAdmin=(isAdmin)
        @isAdmin = isAdmin
    end

    def toString
        return @nombre + " " + @apellido + " " + @edad.to_s + " " + @isAdmin.to_s
    end
end

usuario = User.new("David", "Betancourt", 20, true)
print "Escribe el nombre: "
usuario.nombre = gets.chomp.to_s
usuario.edad = usuario.edad + 1
puts usuario.toString
