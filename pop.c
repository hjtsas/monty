#include "monty.h"

/**
 * f_pop - prints and removes the top element of the stack
 * @head: double pointer to the head of the stack
 * @counter: line number of the instruction
 */

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	if (*head == NULL) /* check if stack is empty */
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		exit(EXIT_FAILURE);
	}
	temp = *stack; /* save the top element of the stack */
	printf("%d\n", temp->n); /* print the top element of the stack */
	*head = (*head)->next; /* move the stack pointer to the next element */
	if (*head != NULL)
	{
		(*head)->prev = NULL;
	}
	free(temp); /* free the removed element */
}
