#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

int _putchar(char c);

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function prototypes */
size_t print_list(const list_t *h);

void print_node(const list_t *node);
void print_null_node(void);
void print_regular_node(const list_t *node);
void print_null_data(void);

#endif /* LISTS_H */
