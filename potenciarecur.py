
def potencia(base, exp):
     if(exp == 0):
         return 1;
     else:
         return base*potencia(base, exp - 1)
         
numero = int(input("Ingrese la base: ",));
numero2 = int(input("Ingrese el exponente: ",));
result = potencia(numero, numero2)
print("El resultado es: ", result)