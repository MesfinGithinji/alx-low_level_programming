#ifndef DOG_H
#define DOG_H
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);


/**
* struct dog - a dog's basic info
* @name: member one
* @age: member two
* @owner: member three
*
* Description: Longer description
*/

struct dog
{
char *name;
float age;
char *owner;
};

/**
* dog_ty - typedef for struct dog
*/

#endif
