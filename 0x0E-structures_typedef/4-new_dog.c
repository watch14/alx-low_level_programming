#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - makes a new struct dog
 * @name: his/her name
 * @age: how old is he
 * @owner: who are you
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    int i, nlen, olen; // Change unsigned int to int
    dog_t *dog;

    if (name == NULL || owner == NULL)
        return (NULL);
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);
    for (nlen = 0; name[nlen]; nlen++)
        ;
    nlen++;
    dog->name = malloc(nlen * sizeof(char));
    if (dog->name == NULL)
    {
        free(dog);
        return (NULL);
    }
    for (i = 0; i < nlen; i++)
        dog->name[i] = name[i];

    dog->age = age;

    for (olen = 0; owner[olen]; olen++)
        ;
    olen++;
    dog->owner = malloc(olen * sizeof(char));
    if (dog->owner == NULL)
    {
        free(dog->name);
        free(dog);
        return (NULL);
    }
    for (i = 0; i < olen; i++)
        dog->owner[i] = owner[i];
    return (dog);
}

