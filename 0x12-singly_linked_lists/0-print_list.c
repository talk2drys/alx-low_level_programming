#include "lists.h"
#include <stddef.h>

/**
 * print_list - Prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	unsigned int j;
	unsigned int i;

	while (h != NULL)
		{
			if (h->str == NULL)
				{
					_putchar('[');
					_putchar('0');
					_putchar(']');
					_putchar(' ');
					_putchar('(');
					_putchar('n');
					_putchar('i');
					_putchar('l');
					_putchar(')');
					_putchar('\n');
				}
			else
				{
					unsigned int len = h->len;
					char str_len[10];
					i = 0;

					/* Convert the length to a string */
					while (len > 0)
						{
							str_len[i++] = (len % 10) + '0';
							len /= 10;
						}
					str_len[i] = '\0';

					/* Reverse the string */

					j = 0;
					i--;
					while (j < i)
						{
							char tmp = str_len[j];
							str_len[j] = str_len[i];
							str_len[i] = tmp;
							j++;
							i--;
						}

					/* Print the node's data */
					_putchar('[');
					for (i = 0; str_len[i] != '\0'; i++)
						_putchar(str_len[i]);
					_putchar(']');
					_putchar(' ');

					for (i = 0; i < h->len; i++)
						_putchar(h->str[i]);
					_putchar('\n');
				}

			h = h->next;
			count++;
		}

	return (count);
}
