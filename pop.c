#include "monty.h"
<<<<<<< HEAD

/**
 * pop - Function that remove the head of stack
 * @stack: stack structure
 * @line_number: Number of instructions
 */
void pop(stack_t **stack, unsigned int line_number)
{
stack_t *temp = NULL;
int n;
n = stack_len(*stack);
if (n <= 0)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
if (list_opcode != NULL)
free_list_opcode(list_opcode);
if (*stack != NULL)
free_list_stack(*stack);
exit(EXIT_FAILURE);
}
if ((*stack)->next == NULL)
{
free(*stack);
*stack = NULL;
return;
}
temp = *stack;
*stack = (*stack)->next;
(*stack)->prev = NULL;
free(temp);
temp = NULL;
=======
/**
 * f_pop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
>>>>>>> e695bf89d5674f8ca41740d630dbc5b88491c1e0
}
