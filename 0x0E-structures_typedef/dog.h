#ifndef DOG_H
#define DOG_H
/*
 * @struct dog
 * Represents information about a dog, including its name, age, and owner
 *
 * This structure stores details about a dog,
 * including its name, age, and owner's name.
 */
struct dog
/*
 * we start here
 * the structure stores details about a dog
 */
{
char *name; /* the name of the dog */
float age; /* the age of the dog in years */
char *owner; /* the name of the dog's owner */
};
/* Other declarations or function prototypes if needed */
/**
 * @brief Initializes a dog structure with the provided data.
 *
 * @param d     Pointer to the struct dog to be initialized.
 * @param name  The name of the dog.
 * @param age   The age of the dog.
 * @param owner The name of the dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */

