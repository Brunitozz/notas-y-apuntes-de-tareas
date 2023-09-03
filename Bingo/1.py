from albumoftheyearapi import AOTY
monedas={}
while True:
    tipo_moneda=str(input("Como se llama la moneda: "))
    cant_moneda=int(input("cantidad de dinero que tiene en la moneda: "))
    if(cant_moneda==0):
        break
    else:
        monedas[tipo_moneda]=cant_moneda
print(monedas)