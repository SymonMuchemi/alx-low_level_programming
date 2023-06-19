#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;

    if (name == NULL || owner == NULL)
        return (NULL);
        
    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    dog->name = name;
    dog->age = age;
    dog->owner = owner;

    return (dog);
}