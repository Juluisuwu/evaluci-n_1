#include <stdio.h>
#include <stdlib.h>

/* printMenu
    Author: Medrano Reyes Julio Cesar
    Date: 10/03/23
    Description: Descripción de los tipos de datos en C
    [Param: [nombre] [tipo] ]
    */


void multiplicacion(){
	/*
	Name: multiplicacion
	Param:
	Return: void
	*/
	int a, b;
	printf("Ingrese los 2 valores a multiplicar: ");
	scanf("%d%d", &a, &b);
	int resultado = a * b;
	if(resultado  > 10)
    {
        
        printf("El resultado es: %d", resultado);
        
    }
    else
    {
        printf("El resultado de la multiplicacion es menor a 10\n");
        
    }
	
}


void division(){
		/*
	Name: division
	Param:
	Return: void
	*/
	int a, b;
	printf("Ingrese los 2 valores a dividir: ");
	scanf("%d%d", &a, &b);
	int resultado = a / b;
	if(a % b == 0)
    {
        
        printf("El resultado es: %d", resultado);
        
    }
    else
    {
        printf("La division no es exacta\n");
        
    }
	
}



void resta(){
		/*
	Name: resta
	Param:
	Return: void
	*/
	int a, b;
	printf("Ingrese los 2 valores a restar: ");
	scanf("%d%d", &a, &b);
	int resultado = a - b;
	if(a % 5 == 0 && b % 5 == 0)
    {
        
        printf("El resultado es: %d", resultado);
        
    }
    else
    {
        printf("Los valores ingresados no son multiplos de 5\n");
        
    }
	
}



void suma(){
		/*
	Name: suma
	Param:
	Return: void
	*/
	int a, b;
	printf("Ingrese los 2 valores a sumar: ");
	scanf("%d%d", &a, &b);
	int resultado = a + b;
	if(a % 2 == 0 && b % 2 == 0)
    {
        
        printf("El resultado es: %d", resultado);
        
    }
    else
    {
        printf("Los valores ingresados no son numeros pares\n");
        
    }
	
}



int printMenu(){
		/*
	Name: printMenu
	Param:
	Return: int
	*/
    int option;
    
    fflush( stdin );
    printf("Bienvenido al men%c seleccione una opci%cn \n\n",163,162);
    printf("\t1)Opcion 1 Suma\n"); printf("\t2)Opcion 2 resta\n"); printf("\t3)Opcion 3 Division\n"); printf("\t4)Opcion 4 multiplicacion\n"); printf("\t4)Opcion 5\n");
    scanf("%d",&option);
    if(option)
        return option;
    else
        return 0;
}

int main(){
    char inutil;
    int flag = 0;
    while(flag!=5){
        flag = printMenu();
        switch (flag){
            case 1:
                suma();
                
                break;
            
            case 2:
                resta();
                
                break;
            
            case 3:
                division();
                
                break;
            
            case 4:
                multiplicacion();
                
                break;

            case 5:
                printf("\nNo valido");
                break;
            default:
                printf("\nNo valido");
                break;
        }
        printf("\nOprima enter tecla cualquiera para continuar ");
        fflush( stdin );
        scanf("%c",&inutil);
    }
    printf("excelente");
}

//---------------------INSTRUCCIONES-----------------------
//explique: 
//      1. ¿Qué es lo que hace el código en un comentario antes de modificarlo? Nos muestra un menú que nos da 4 opciones pero las primera 3 solo nos llevan al mismo menú y la opción 4 cierra el programa, se manda a llamar a la función printMenu que nos da las opciones que podremos usar en pero como ninguna cumple la condición de while(flag !=4) se repite la función hasta que llega a ser 4 en donde se cumple 
//      2. ¿Para qué sirve la función fflush? Para vaciar el buffer de salida, los datos se almacenan en el buffer intermedio de memoria del sistema y esta función garantiza que los datos almacenados en el búfer intermedio se escriban en el archivo físico en el disco 
//      3. ¿Cuál es la sintaxis de un while? while (condición) { cuerpo del bucle o lo que se ejecutara si la condición se cumple} 
//      4. ¿Cuál es la sintaxis de un switch?  Se utiliza para ejecutar ciertas partes del codigo dependiendo del valor de la acción que este relacionado a cierta parte del codigo, se evalua una vez la expresión y se compara con los casos "case" dentro del bloque switch y se utiliza la palabra break para salir del control de switch y continuar con la siguiente acción, también existe default, si el caso ninguno de los casos "case" coincide se ejecutan las instrucciones del bloque default
//Modifique el siguien código para que mande a llamar la función suma, resta, multiplicación y división y agregue un mecanismo para preguntar si se deasea volver al menú principal.
//Guarde y suba su código a un repositorio.
