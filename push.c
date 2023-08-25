#include "monty.h"

/**
 * f_push - add node to the stack or queue
 * @head: pointer to the head of the stack or queue
 * @counter: line number in the input file
 * 
 * This function reads a string from the global state variable
 * and converts it to an integer. Then it adds a node with that
 * integer value to the stack or queue, depending on the mode.
 */
void f_push(stack_t **head, unsigned int counter)
{
    int n;
    char *endptr;

    if (global_state.arg == NULL)
    {
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        exit(EXIT_FAILURE);
    }

    /* Convert the string argument to an integer */
    n = strtol(global_state.arg, &endptr, 10);

    /* Check if the conversion was successful */
    if (*endptr != '\0')
    {
        fprintf(stderr, "L%d: usage: push integer\n", counter);
        exit(EXIT_FAILURE);
    }

    /* Add a node with the integer value to the stack or queue */
    if (global_state.mode == STACK)
    {
        add_node(head, n);
    }
    else
    {
        add_queue(head, n);
    }
}
