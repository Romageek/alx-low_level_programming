#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Return: pointer to the new dog if success, NULL if function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_n = 0, len_o = 0, i;
	dog_t *dog;

	while (*(name + len_n))
		len_n++;

	while (*(owner + len_o))
		len_o++;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len_n + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len_o + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len_n; i++)
		*(dog->name + i) = *(name + i);
	for (i = 0; i < len_o; i++)
		*(dog->owner + i) = *(owner + i);
	dog->age = age;

	return (dog);
}
