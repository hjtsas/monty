#include "monty.h"

/**
 * f_pint - prints the value at the top of the stack
 * @head: double pointer to the head of the stack
 * @counter: line number of the instruction
 */

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL) /* check if stack is empty */
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
		fclose(bus.file); /* close the file */
		free(bus.content); /* free the content */
		free_stack(*head); /* free the stack */
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n); /* print the value at the top of the stack */
}
