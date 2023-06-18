def promedio_alumno():
    n = int(input("Ingrese el número total de estudiantes: "))
    num_alum = 1

    while num_alum <= n:
        parcial = int(input("Ingrese la calificación del parcial: "))
        final = int(input("Ingrese la calificación final: "))
        practica = int(input("Ingrese la calificación de la práctica: "))

        prom = (parcial + final + practica) / 3
        print("El promedio del alumno es:", prom)

        num_alum += 1

promedio_alumno()
