#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog
 * @name: name of new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n7, o7, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (n7 = 0; name[n7]; n7++)
		;
	n7++;
	dog->name = malloc(n7 * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n7; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (o7 = 0; owner[o7]; o7++)
		;
	o7++;
	dog->owner = malloc(o7 * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < o7; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
