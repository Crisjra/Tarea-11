/*
Crear un arreglo bidimensional de 5x5
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

	using namespace std;
 
	int random();
	int main()
{
	int suma = 0;
    
    int numeros[5][5];
    
    srand(time(NULL));
 
    for (int i = 0; i < 5; i++)
        
		for (int j = 0; j < 5; j++)
        {
        	numeros[i][j] = random();
        	suma = suma + numeros[i][j];
        }
 
    printf("\n  Arreglo Bidimensional de 5x5:\n\n");
 
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
        	printf(" %2d ", numeros[i][j]);
        }
        printf("\n");
    }
 
    printf("\n  El total de la Suma es de: %d\n", suma);
 
    return 0;
}
	int random()
{
    return rand() % 10 + 1;
}
