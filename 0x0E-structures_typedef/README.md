### This is a readme file for the 0x0E. C - Structures, typedef which has 0-5 tasks
[0.Define a new type struct dog with the folowing elements](dog.h)
name, type = char *
age, type = float
owner, type = char *

[1.Write a function that initialize a variable of type struct dog](1-init_dog.c)

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner)

[2.Write a function that prints a struct dog](2-print_dog.c)

Prototype: void print_dog(struct dog *d);

You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

[3.Define a new type dog_t as a new name for the type struct dog.](dog.h)

[4.Write a function that creates a new dog.](4-new_dog.c)

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails

[5.Write a function that frees dogs](5-free_dog.c)

Prototype: void free_dog(dog_t *d);

