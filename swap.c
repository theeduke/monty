#include "monty.h"

/**
 * swap -  swaps data from top to previous
 * @stack: stack given by main
 * @line_nums: amount of lines
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_nums)
{
	stack_t *a = NULL;
	int b = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_nums);
		exit(EXIT_FAILURE);
	}
	a = *stack;
	b = a->n;
	a->n = b;

	a->n = a->next->n;
	a->next->n = b;
}
