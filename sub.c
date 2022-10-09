#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * _sub -  substracts the first two nodes of the stack
 * @stack: stack given by main
 * @line_nums: number of lines
 *
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_nums)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_nums);
		exit(EXIT_FAILURE);
	}

	result = ((*stack)->next->n) - ((*stack)->n);
	pop(stack, line_nums);
	(*stack)->n = result;
}
