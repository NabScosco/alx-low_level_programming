#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog -  Definition of a structure
 * @name: A member of the structure
 * @owner: A member of the structure
 * @age: A member of the structure
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
