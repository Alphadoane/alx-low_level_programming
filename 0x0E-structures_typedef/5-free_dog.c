#include <stdlib.h>
#include "main.h"

/**
 * @brief Frees memory allocated for a dog structure.
 *
 * @param d Pointer to the dog structure to be freed.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
if (d->name != NULL)
{
free(d->name);
}
if (d->owner != NULL)
{
free(d->owner);
}
free(d);
}
}
