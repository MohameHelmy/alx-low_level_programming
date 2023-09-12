#ifndef DOG_H
#define DOG_H

/**
 *struct dog - Dog attributes
 *@name: the name of the dog.
 *@age: The age of the dog.
 *@owner: The owner of the dog.
 *Description: The attributes of a dog.
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
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /* struct dog - a structure of dog */
