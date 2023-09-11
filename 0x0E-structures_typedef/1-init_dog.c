#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * @brief Initializes a dog structure with the provided data.
 *
 * @param d     Pointer to the struct dog to be initialized.
 * @param name  The name of the dog.
 * @param age   The age of the dog.
 * @param owner The name of the dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = malloc(strlen(name) + 1);
d->owner = malloc(strlen(owner) + 1);

if (d->name == NULL || d->owner == NULL)
{
fprintf(stderr, "Memory allocation failed\n");
exit(1);
}

strcpy(d->name, name);
d->age = age;
strcpy(d->owner, owner);
}

int main(void)
{
struct dog my_dog;

init_dog(&my_dog, "Buddy", 3.5, "John Doe");

printf("Name: %s\n", my_dog.name);
printf("Age: %.1f\n", my_dog.age);
printf("Owner: %s\n", my_dog.owner);

free(my_dog.name);
free(my_dog.owner);

return (0);
}
