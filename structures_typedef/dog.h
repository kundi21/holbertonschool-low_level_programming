#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog, but dogs does not have owners.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
