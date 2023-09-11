#ifndef MAIN_H
#define MAIN_H

typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

/* Function prototypes */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MAIN_H */

