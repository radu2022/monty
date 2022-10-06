#include "monty.h"
<<<<<<< HEAD

/**
 * pint - prints the value at the top of the stack
 * @stack: stack structure
 * @line_number: Number of instructions
 */

void pint(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
free_list_stack(*stack);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
=======
/**
 * f_pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
>>>>>>> e695bf89d5674f8ca41740d630dbc5b88491c1e0
}
