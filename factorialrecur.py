
def factorial(num):
     if(num == 0):
         return 1;
     else:
         return num*factorial(num - 1)
         
numero = int(input("Ingrese el numero para factorial: ",));
result = factorial(numero)
print("El resultado es: ", result)