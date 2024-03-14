#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - function that creates a new dog
 * @name: name element of structure dog
 * @age: age element of structure dog
 * @owner: owner element of structure dog
 * Return: Pointer to main
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *p_dog;

	p_dog = malloc(sizeof(struct dog));
	if (!(p_dog == 0))
	{
		p_dog->name = name;
		p_dog->age = age;
		p_dog->owner = owner;
	}
	else
	{
		free(p_dog);
		return (NULL);
	}
	return (p_dog);
}
