#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - struct that creates dog informations
 * @name: the name of the dog
 * @owner: the owner of the dog
 * @age: the age of the dog
 * Description: struct declaration
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
