#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: first name's dog
 * @age: this the dog's age
 * @owner: this is the dog owner's name
 * Description: dog struct containing the name, age and owner's name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
