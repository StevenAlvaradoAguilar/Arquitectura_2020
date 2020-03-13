#include <stdio.h>

int main()
{
  //Declaramos los atributos dentro del main.
  int numero_1, numero_2, suma; 

  //Imprimimos el mensaje de agregar el primer numero.
  printf("Digite el primer numero: ");

  //Lo escaneamos y guardamos en la memoria de la computadora.
  scanf("%d", &numero_1); 

  //Imprimimos el mensaje de agregar el segundo numero.
  printf("Digite el segundo numero: ");

  //Lo escaneamos y guardamos en la memoria de la computadora.
  scanf("%d", &numero_2); 

  //Sumamos los dos numeros y la guardamos en elatributo suma.
  suma = numero_1 + numero_2;

  //Imprimimos el mensaje del resultado de la suma.
  printf("La suma de los numeros es de: %d", suma);

  printf("\nMuchas gracias por ejecutar el programa.");
}
