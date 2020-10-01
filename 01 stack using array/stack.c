#include <stdlib.h> 
#include <assert.h>
#include <limits.h> 

#include "stack.h"

struct stack_struct {
	stack_val_type *arr;
	int top, capacity;
};

stack_type * stack_alloc(unsigned int capacity) {
	stack_type *s = (stack_type *)malloc(sizeof(stack_type));
	s->arr = (stack_val_type *)malloc(capacity * sizeof(stack_val_type));
	
	// Check if the memory has been successfully 
	// allocated by malloc or not 
	assert(s != NULL);

	// Set initial height of the stack as -1 (empty)
	s->top = -1;

	s->capacity = capacity;

	return s;
}

void stack_free(stack_type *s) {
	// free array inside the stack
	free(s->arr);

	free(s);
}

bool stack_is_full(stack_type *s) {
	return s->top == s->capacity - 1;
}

bool stack_is_empty(stack_type *s) {
	return s->top == -1;
}

void stack_push(stack_type *s, stack_val_type item) {
	if (stack_is_full(s)) {
		printf("Stack is full\n");
		return;
	} else {
		s->arr[++s->top] = item;
	}
}

stack_val_type stack_pop(stack_type *s) {
	if (stack_is_empty(s)) {
		printf("Stack is empty\n");
		return INT_MIN;
	} else {
		return s->arr[s->top--];
	}
}

stack_val_type stack_peek(stack_type *s) {
	if (stack_is_empty(s)) {
		printf("Stack is empty\n");
		return INT_MIN;
	} else {
		return s->arr[s->top];
	}
}

int stack_count(stack_type *s) {
	return s->top + 1;
}