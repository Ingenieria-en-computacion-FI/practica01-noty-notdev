#include <stdio.h>

int main(){
	// Resolver ejercicio 9

	/*
	 *	&a[-1] y &a[5] compila porque el preprocesador las convierte en
	 *	la expresiónes (a - 1) y (a '5), respectivamente,
	 *	lo que no rompe la aritmética de punteros, ni la de
	 *	arreglos.
	 *
	 *	Es peligroso porque no se tiene nada asignado en la dirección "a - 1",
	 *	y manejar memoria desconocida puede corromper otros datos del sistema
	 *	o modificar otros importantes para el funcionamiento de x o y
	 *	programa (si es windows, en sistemas UNIX está protegido).
	 *
	 *	????
	*/

	return 0;
}
