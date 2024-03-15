#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - function that creates a new dog
 * @name: name element
 * @age: float age element
 * @owner: owner element
 * Return: Pointer to main
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *p_dog;

	p_dog = malloc(sizeof(struct dog));
	if (!(p_dog == NULL))
	{
		if (name != NULL)
			p_dog->name = name;
		else
			free(name);

		if (owner != NULL)
			p_dog->owner = owner;
		else
		{
			free(name);
			free(owner);
		}
		p_dog->age = age;
	}
	else
	{
		free(p_dog);
		return (NULL);
	}
	return (p_dog);
}
