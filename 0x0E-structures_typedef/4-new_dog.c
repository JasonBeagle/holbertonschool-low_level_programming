#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog entry.
* _strlen: gives length of string.
* _strcpy: copies a string including null byte.
* @name: dogs name.
* @age: dogs age.
* @owner: dogs owner.
*
* _strlen - gives length of a string.
* _strcpy - copies string including null pointer.
*
* Return: pointer to the new dog entry.
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc((sizeof(char)) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc((sizeof(char)) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
/**
* _strcpy - copies string at @src, including null byte, to  point determined by @dest.
*@dest: where to copy string.
*@src: string to copy
*Return: pointer to destinatin string.
**/
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}

/**
*_strlen - returns length of a string.
*@str: string to be evaluated.
*Return: the length of the string.
*/
int _strlen(char *str)
{
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}
