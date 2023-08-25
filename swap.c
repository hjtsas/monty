#include "monty.h"

/**
 * f_swap - swaps the top two elements of the stack
 * @head: double pointer to the head of the stack
 * @counter: line number of the instruction
 */

void f_swap(stack_t **head, unsigned int counter)
{
	int temp;

	if (*head == NULL || (head)->next == NULL)
	{
		fprintf(stderr, "L%d: can’t swap, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	temp = (head)->n; /* save the value of the top element */
	(*head)->n = (head)->next->n;
	(head)->next->n = temp; /* assign the saved value to the second element */
}
