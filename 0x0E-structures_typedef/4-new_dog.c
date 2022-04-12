#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: address to a new dog or NULL if failed
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_new_dog;

	a_new_dog = malloc(sizeof(dog_t));
	if (a_new_dog == NULL)
		return (NULL);

	a_new_dog->name = name;
	a_new_dog->age = age;
	a_new_dog->owner = owner;

	return (a_new_dog);
}
