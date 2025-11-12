#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure qui contient des informations sur un chien.
 *
 * @name: nom du chien.
 * @age: age du chien.
 * @owner: nom du proprietaire du chien.
 *
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
