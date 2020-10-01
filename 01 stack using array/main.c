#include <stdio.h>

#include "stack.h"

/* Display stack
 * It take stack_type pointed by *s as parameter 
 */
void stack_display(stack_type *s) {
	for (int i = 0; i <= s->top; i++) {
		printf("%d ", s->arr[i]);
	}
	printf("\n");
}

int main(void) {
	stack_type *s = stack_alloc(5);

	stack_push(s, 31);
	stack_push(s, 32);

	stack_display(s);

	printf("Number of items in the stack: %d\n", stack_count(s));

	printf("Popped item from the stack: %d\n", stack_pop(s));

	printf("Popped item from the stack: %d\n", stack_pop(s));

	printf("Popped item from the stack: %d\n", stack_pop(s));

	stack_push(s, 33);
	stack_push(s, 34);
	stack_push(s, 35);
	stack_push(s, 36);
	stack_push(s, 37);
	stack_push(s, 38);

	printf("Number of items in the stack: %d\n", stack_count(s));

	printf("Top item from the stack: %d\n", stack_peek(s));

	stack_display(s);

	stack_free(s);

	return 0;
}