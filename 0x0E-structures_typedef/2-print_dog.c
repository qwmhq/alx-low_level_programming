#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a struct dog
 * @d: struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
	printf("Age: %2f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
