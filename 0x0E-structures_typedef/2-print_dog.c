#include "dog.h"

/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to a dog structure.
 *
 * This function prints details about a dog's name, age, and owner.
 * If any of the information is NULL, "(nil)" will be printed instead.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : "(nil)");
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
