#include "monty.h"

/**
 * pint - print the value at the top of the stack
 * @stack: stack given by main in start.c
 * @line_nums: amount of lines
 * Return: void
 */
void pint(stack_t **stack, unsigned int line_nums)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_nums);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
