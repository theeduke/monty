#include "monty.h"

/**
 * pop - pops the very top element of the stack
 * @stack: stack given by main in start.c
 * @line_nums: line nums of errors
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_nums)
{
	stack_t *a = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_nums);
		exit(EXIT_FAILURE);
	}

	a = (*stack)->next;
	free(*stack);
	*stack = a;
	if (!*stack)
		return;
	(*stack)->prev = NULL;
}
