#ifndef _MOSTAFA_YOUSRY_
#define _MOSTAFA_YOUSRY_
/**
 * struct dog - struct named dog
 * @name: doggieee name
 * @age: doggieee age
 * @owner: doggiee name
 * Description: doggiee struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
