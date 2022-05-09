#ifndef _HEADER_
#define _HEADER_
/**
 * struct dog - dog attributes
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Description: The attributes of a dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * dog_t - typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog-t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
