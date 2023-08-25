#include "monty.h"

/**
 * f_add - adds the top two elements of the stack
 * @head: double pointer to the head of the stack
 * @counter: line number of the instruction
 * Return: no return
 */

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int len = 0, aux;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	aux = temp->n + temp->next->n;
	temp->next->n = aux;
	*head = temp->next;
	free(temp);
}
