#include "main.h"

/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to a dog structure.
 *
 * This function prints details about a dog's name, age, and owner.
 * If any of the information is NULL, "(nil)" will be printed instead.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		printf("Name: %s\n", d->name);
		if (d->age == NULL)
			printf("Age: (nil)\n");
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		printf("Owner: %s\n", d->owner);
	}
}
