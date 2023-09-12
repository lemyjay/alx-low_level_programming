#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A struct for the/an object dog.
 * @name: The name of the doge.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: Just creating a struct for the object dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

#endif /* DOG_H */
