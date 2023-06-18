n=int(input("escriba el numero de notas: "))
i=1
suma=0
while (i<=n):
    nota=float(input("introduzca cada nota: "))
    suma = suma + nota
    i = i + 1
promedio= suma/n
print("la nota promedio es: ", promedio)