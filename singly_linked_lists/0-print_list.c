#include "lists.h"
#include <stdio.h>

/**
* print_list - print the node list
* @h: pointer to the head of the list
* Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
size_t cant = 0;
const list_t *nods = h;

while (nods != NULL) /** si la lista no es NULL, se recorre la lista. */
{
printf("[%d] ", nods->len); /** se imprime la longitud de la lista. */

if (nods->str != NULL)
printf("%s", nods->str); /** imprimo la lista */
else
printf("(nil)");

printf("\n");
nods = nods->next; /** se mueve al siguiente nodo de la lista. */
cant++; /** se aumenta el contador. */
}
return (cant); /** se retorna la cantidad de nodos */
}
