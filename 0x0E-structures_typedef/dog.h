#ifndef DOG
#define DOG
/**
 * struct dog - descritption
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
