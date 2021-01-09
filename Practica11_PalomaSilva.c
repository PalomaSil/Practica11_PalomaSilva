/* 	Práctica#11                             Silva Rodríguez Paloma Mariel
	Fecha de entrega: 9 de Enero de 2021*/
//				Arreglos unidimensionales y multidimensionales 

//1. Código: apuntadores. 

//Declaración de librerías
#include <stdio.h>

//Declaración de variables globales: No hay


/*
Este programa trabaja con aritmética de apuntadores para acceder a los
valores de un arreglo.
*/

//Declaración de función principal 
int main () {
	
	//Declaración de variables locales
	//Uso de variables: almacenar los valores en el arreglo y con el apuntador acceder a ellos.
		
	int arr[] = {5, 4, 3, 2, 1};
	int *apArr; //Apuntador
	apArr = arr;
	
	//Bloque de instrucciones 
	/*Este bloque es para que una vez ingresado el valor dentro del arreglo, el apuntador pueda
	acceder a él y mostrarlo al usuario */
	
	printf("int arr[] = {5, 4, 3, 2, 1};\n");
	printf("apArr = &arr[0]\n");
	
	int x = *apArr;
	printf("x = *apArr \t -> x = %d\n", x);
	
	x = *(apArr+1);
	printf("x = *(apArr+1) \t -> x = %d\n", x);
	
	x = *(apArr+2);
	printf("x = *(apArr+1) \t -> x = %d\n", x);
	
	return 0;
}









// 2. Código: apuntadores en ciclo for

//Declaración de librerías
#include <stdio.h>

//Declaración de variables globales: No hay


/*
Este programa genera un arreglo unidimensional de 5 elementos y
accede a cada elemento del arreglo a través de un apuntador
utilizando un ciclo for.
*/

//Declaración de función principal
int main (){
	
	//Declaración de variables locales
	//Uso de variables: generar arreglo con 5 valores en él y con el apuntador acceder a ellos.
		
	#define TAMANO 5
	int lista[TAMANO] = {10, 8, 5, 8, 7};
	int indice;
	int *ap = lista; //Apuntador *ap
	
	//Bloque de instrucciones 
	/*Este bloque genera un ciclo for y con él se muestra en pantalla los valores almacenados en el arreglo
	uno por uno en forma de lista.*/
	
	printf("\tLista\n");
	for (indice = 0 ; indice < 5 ; indice++){
		printf("\nCalificación del alumno %d es %d", indice+1, *(ap+indice));
	}
	printf("\n");
	return 0;
}











// 3. Código: arreglos multidimensionales con apuntadores


//Declaración de librerías
#include<stdio.h>

//Declaración de variables globales: No hay

/* Este programa genera un arreglo de dos dimensiones (arreglo
multidimensional) y accede a sus elementos a través de un apuntador utilizando
un ciclo for.
*/

//Declaración de función principal 
int main(){
	
	//Declaración de variables locales
	//Uso de variables: generar arreglo bidimendional con 9 elementos y con el apuntador acceder a ellos.
	
	int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int i, cont=0, *ap; //Apuntador *ap

	//Bloque de instrucciones 
	/*Este bloque es para mostrar una matriz con los valores del arreglo bidimensional "matriz[3][3]" mediante el ciclo for.*/
	
	ap = matriz;
	printf("Imprimir Matriz\n");
	for (i=0 ; i<9 ; i++){
		if (cont == 3){
			printf("\n");
			cont = 0;
		}	
		printf("%d\t",*(ap+i));
		cont++;
	}
	printf("\n");
	return 0;
}
