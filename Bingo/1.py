"""Escribir un programa que guarde en una variable el diccionario {'Euro':'€', 'Dollar':'$', 'Yen':'¥'}, 
pregunte al usuario por una divisa y muestre su símbolo o un mensaje de aviso si la divisa
no está en el diccionario."""

monedas={}
while True:
    tipo_moneda=str(input("Como se llama la moneda: "))
    cant_moneda=int(input("cantidad de dinero que tiene en la moneda: "))
    if(cant_moneda==0):
        break
    else:
        monedas[tipo_moneda]=cant_moneda
print(monedas)