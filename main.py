

import os
def printMenu():
    """
    Name:printMenu
    Param:
    return: int
    """
    print("Bienvenido al menú seleccione una opciónn \n\n")
    print("\t1)Suma\n")
    print("\t2)Resta\n")
    print("\t3)Division\n")
    print("\t4)Multiplicacion\n")
    option = input()
    if(option):
        return int (option)
    else:
        return 0

def suma():
    """
    Name:suma
    Param:
    return: int
    """
    n1 = int(input("ingrese el primer numero: "))
    n2 = int(input("ingrese el segundo numero: "))
    if n1 % 2 == 0 and n2 % 2 == 0:
        print("El resultado es: ", n1 + n2)
    else:
        print("Los valores no son pares")

def resta():
    """
    Name:resta
    Param:
    return: int
    """
    n1 = int(input("ingrese el primer numero: "))
    n2 = int(input("ingrese el segundo numero: "))
    if n1 % 5 == 0 and n2 % 5 == 0:
        print("El resultado es: ", n1 - n2)
    else:
        print("Los valores no son multiplos de 5")

def division():
    """
    Name:division
    Param:
    return: int
    """
    n1 = int(input("ingrese el primer numero: "))
    n2 = int(input("ingrese el segundo numero: "))
    if n1 % n2 == 0:
        print("El resultado es: ", n1 // n2)
    else:
        print ("La division no es exacta")
        
def multiplicacion():
    """
    Name:multiplicacion
    Param:
    return: int
    """
    n1 = int(input("ingrese el primer numero: "))
    n2 = int(input("ingrese el segundo numero: "))
    if n1 * n2 > 10:
        print("El resultado es: ", n1 * n2)
    else:
        print ("La multiplicacion es menor a 10")


def main():
    flag = 0
    inutil =''
    while(flag!=4):
        flag = printMenu()
        
        if (flag == 1):
            suma()
        elif (flag == 2):
            resta()
        elif (flag == 3):
            division()
        elif (flag == 4):
            multiplicacion()
        else:
            print("\nNo valido")

        print("\nOprima enter tecla cualquiera para continuar ")
        input(inutil)
    print("excelente")

if __name__ == "__main__":
    main()
#---------------------INSTRUCCIONES-----------------------
#explique: 
#      1. ¿Qué es lo que hace el código en un comentario antes de modificarlo? Nos da un menu con 4 opciones en las que el usuario puede escoger alguna de esas 4 pero no harán nada más que regresar al menu principal
#      2. ¿Cuál es la sintaxis de un while? while (condición) //el código a ejecutar mientras sea verdadera la condición
#      3. ¿Exite swhitch en python? Tal cual, no existe switch pero se pude emular como se hizo en este caso
#      4. ¿Qué es un elif? es el else if de c++, es una segunda condición que si es verdadera se ejecuta cierta blpque de código
#      5. ¿Qué función de se ejecuta al correr el script? El main
#Modifique el siguien código para que mande a llamar la función suma, resta, multiplicación y división y agregue un mecanismo para preguntar si se deasea volver al menú principal.
#Guarde y suba su código a un repositorio.