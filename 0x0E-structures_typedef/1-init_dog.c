#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;  // Set the name of the dog
d->age = age;    // Set the age of the dog
d->owner = owner; // Set the owner of the dog
}
}
 
