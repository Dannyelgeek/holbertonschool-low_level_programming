#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - main node of the list.
 * @str: pointer to a string of the list.
 * @len: len of the list.
 * @next: pointer to next node of the list.
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
