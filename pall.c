#include "monty.h"

/**
 * pall - prints the stack
 * @stack: stack given by main in start.c
 * @line_nums: amount of lines.
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_nums __attribute__((unused)))
{
	print_stack(*stack);
}
