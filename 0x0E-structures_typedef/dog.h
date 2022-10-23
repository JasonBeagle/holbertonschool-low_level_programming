#ifndef DOG_H
#define DOG_H

/**
*struct dog - a structure logs information aboout dogs.
*@name: first member, dogs name.
*@age: second member, dogs age.
*@owner: third member, dogs owner.
*
*
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**Initializes a variable of type struct dog**/
void init_dog(struct dog *d, char *name, float age, char *owner);
/**Prints struct dog**/
void print_dog(struct dog *d);
/**Defines a new type, dog_t of struct dog type**/
typedef struct dog dog_t;
/**Creates a new dog**/
dog_t *new_dog(char *name, float age, char *owner);
#endif
