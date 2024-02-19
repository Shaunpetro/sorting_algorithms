#ifndef SORT_H_
#define SORT_H_

/* ------------ sys libraries ------------ */
#include <stdlib.h>
#include <stdio.h>

/* ----------- Macros comparison --------*/
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 */

typedef enum bool
{
	false = 0,
	true
} bool;


/* ------------ double linke list struct ------------ */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* ************** project files prototypes ************** */
void insertion_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);


#endif