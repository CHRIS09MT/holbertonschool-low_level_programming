#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the information of my dog
 * @d: shared information
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		char *name = d->name ? d->name : "(nil)";
		float age = d->age ? d->age : 0;
		char *owner = d->owner ? d->owner : "nil";

		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
	}
}
