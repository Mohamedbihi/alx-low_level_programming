#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * new_dog - FUNCTION THAT CREATS A NEW DOG.
 * @name: NAME OF THE DOG.
 * @age: AGE OF THE DOG.
 * @owner: OWNER OF THE DOG.
 *
 * Return: VOID
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}

name_copy = malloc(sizeof(char) * (strlen(name) + 1));
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}

owner_copy = malloc(sizeof(char) * (strlen(owner) + 1));
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}

strcpy(name_copy, name);
strcpy(owner_copy, owner);

new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

return (new_dog);
}
