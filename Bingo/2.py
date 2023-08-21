import tkinder


"""Escribir un programa que pregunte al usuario su nombre, edad, dirección y teléfono
 y lo guarde en un diccionario. Después debe mostrar por pantalla el mensaje <nombre> 
 tiene <edad> años, vive en <dirección> y su número de teléfono es <teléfono>."""
datos={}
#introduccion de nombres
datos['nombre']=input("introduzca su nombre: ")
#introduccion de edad
datos['edad']=input("indique su edad: ")
#introduccion de direccion
datos['direccion']=input("escriba su direccion: ")
for i in datos:
    print(f"{i}: {datos[i]}" )
