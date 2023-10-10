#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Represents a dog with its name, age, and owner.
 * @name: Name of the dog (string).
 * @age: Age of the dog (float).
 * @owner: Owner of the dog (string).
 * init_dog - initiates a dog with its name, age, and owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
