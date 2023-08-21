while True:
    a=int(input("ingrese el coeficiente a: "))
    if (a<0):
        print("escriba nuevamente, la ecuacion tiene que ser monica")
    else:
        break
while True:
    b=int(input("ingrese el coeficiente b: "))
    c=int(input("ingrese el coeficiente c: "))
    
    discriminante = b*b - 4*a*c
    if (discriminante<0):
        print ("La ecuacion tiene soluciones imaginarias\nEscriba nuevamente los valores b y c.")
    elif (discriminante==0):
        print ("la ecuacion tiene una sola solucion real")
        x0=(-b*0.5/a)
        print("la solucion es: ", x0)
        break
    else:
        print ("la ecuacion tiene dos soluciones reales")
        x1=(-b+discriminante**0.5)*0.5/a
        x2=(-b-discriminante**0.5)*0.5/a
        print ("las dos soluciones son x1=",x1," x2= ",x2)
        break