#include "monty.h"

#define ERROR_ADD "L%d: can't add, stack too short\n"

/**
 * f_add - adds the top two elements of the stack
 * @counter: line_number
 * Return: no return
 */

void f_add(unsigned int counter)
{
	int sum;

	if (stack_len(bus.head) < 2)
	{
		fprintf(stderr, ERROR_ADD, counter);
		free_all();
		exit(EXIT_FAILURE);
	}
	sum = bus.head->n + bus.head->next->n;
	pop(&bus.head, counter);
	bus.head->n = sum;
}
