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
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
