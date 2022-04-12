#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - creates a structure for a dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the god owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
