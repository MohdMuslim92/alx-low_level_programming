#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a structure function
 * DESCRIPTION: a function that creates a new structure
 * @name: name
 * @age: age
 * @owner: owner
 * Return: a pointer for the new structure or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = _strdup(name);
	if (!new_dog->name)
	{
		free(new_dog);
			return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
			return (NULL);
	}
	return (new_dog);

}
/**
 * _strdup - copy a string in a memory location
 * Description: a function that returns a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter
 * @str: The string passed to the function to be copied
 * @: pointer returned to the copied string
 * Return: a pointer to the string or NULL if fails
 */
char *_strdup(char *str)
{
	char *arr;
	int i = 0, j;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		;
	arr = (char *) malloc(j + 1 * sizeof(char));
	if (arr != NULL)
	{
		while (str[i] != '\0')
		{
			arr[i] = str[i];
			i++;
		}
	} else
	{
		return (NULL);
	}
	arr[i] = '\0';
	return (arr);

}

