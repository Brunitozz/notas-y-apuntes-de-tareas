def Facorial(int:a):
    resultado=a*Facorial(a-1)
    return resultado

b=input("ingrese un numero: ")
print("el fatorial del numero",b,"es: ")
Facorial(b)             
