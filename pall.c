#include "monty.h"

/**
 * f_pall - prints all the values on the stack
 * @head: double pointer to the head of the stack
 * @counter: line number of the instruction
 */

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	(void)counter;

	temp = *head;
	while (temp != NULL) /* traverse the stack and print each element */
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
