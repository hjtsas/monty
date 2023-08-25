#include "monty.h"

/**
 * f_push - pushes an element to the stack or queue
 * @head: double pointer to the head of the stack
 * @counter: line number of the instruction
 */

void f_push(stack_t **head, unsigned int counter)
{
	char *arg;
	int n, j = 0, flag = 0;

	arg = strtok(NULL, "\n\t\r "); /* get the argument after push */
	if (arg == NULL) /* check if argument is present */
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		exit(EXIT_FAILURE);
	}
	if (arg[0] == '-') /* handle negative sign */
		j++;
	for (; arg[j] != '\0'; j++) /* check if argument is valid */
	{
		if (arg[j] > 57 || arg[j] < 48)
			flag = 1;
	}
	if (flag == 1) /* print error and exit if argument is invalid */
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	n = atoi(arg); /* convert argument to integer */
	if (*stack == NULL) /* create new node and add it to stack or queue */
	{
		*stack = create_node(n);
	}
	else
	{
		if (bus.lifi == 0) /* add node to stack */
			add_node(stack, n);
		else /* add node to queue */
			addqueue(stack, n);
	}
}
