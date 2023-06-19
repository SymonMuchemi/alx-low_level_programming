#include "dog.h"
/**
 * init_dog - initializeds a variable of type dog
 * @d: pointer to struct dog
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner
 * Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
