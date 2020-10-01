/* Implementation of stack using one dimensional array.
 * Pushes, peeks, and pops from top of the stack and an allocate and free
 * function is provided to instantiate a stack.
 * Author: Sanjay PJ
 */

#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

/* stack_type is a stack object that the stack_foo functions act upon.
 * new stack object can be created with stack_alloc().
 */
typedef struct stack_struct stack_type;

/* This stack_type_val is the type of all values stored in the stack.
 * change this to the type you want to store in the stack.
 */
typedef int stack_val_type;

/* Instantiates a new stack
 * It take capacity as an integer that represent size of the stack
 * Returns a pointer of a new stack_type with memory allocated by malloc
 * exist if it fails
 */
stack_type * stack_alloc(unsigned int capacity);

/* Frees the stack_type pointed by *s and array of stack_val_type pointed by 
 * s->arr as parameter 
 */
void stack_free(stack_type *s);

/* Push an item with the data type of stack_val_type to the stack
 * stack_type pointed by *s and item that need to push as stack_val_type
 * as parameter
 */
void stack_push(stack_type *s, stack_val_type item);

/* Pop an item with the data type of stack_val_type from the stack
 * It take stack_type pointed by *s as parameter
 */
stack_val_type stack_pop(stack_type *s);

/* Get an item with the data type of stack_val_type from the stack
 * It take stack_type pointed by *s as parameter
 */
stack_val_type stack_peek(stack_type *s);

/* Check if the stack is empty
 * It take stack_type pointed by *s as parameter
 */
bool stack_is_empty(stack_type *s);

/* Check if stack is full
 * It take stack_type pointed by *s as parameter 
 */
bool stack_is_full(stack_type *s);

/* Get the number of items in the stack
 * It take stack_type pointed by *s as parameter
 */
int stack_count(stack_type *s);

#endif