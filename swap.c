#include "monty.h"
<<<<<<< HEAD

/**
 * swap - Function that swaps top values
 * @stack: stack structure
 * @line_number: Number of instructions
 */
void swap(stack_t **stack, unsigned int line_number)
{
stack_t *temp = NULL;
int n;
n = stack_len(*stack);
if (n < 2)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
if (list_opcode != NULL)
free_list_opcode(list_opcode);
if (*stack != NULL)
free_list_stack(*stack);
exit(EXIT_FAILURE);
}
else if (n == 2)
{
temp = (*stack)->next;
(*stack)->next = NULL;
(*stack)->prev = temp;
temp->prev = NULL;
temp->next = *stack;
*stack = temp;
}
else
{
temp = (*stack)->next;
(*stack)->next = (*stack)->next->next;
(*stack)->prev = temp;
temp->next->prev = *stack;
temp->prev = NULL;
temp->next = *stack;
*stack = temp;
}
=======
/**
 * f_swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
>>>>>>> e695bf89d5674f8ca41740d630dbc5b88491c1e0
}
