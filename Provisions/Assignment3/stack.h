/*
 *	Stack
 *	Author: J.R.Dermoudy
 *	Version: September 2023
 *
 *	This file holds the specification of the Stack.
 *
 *	This file is complete.
 */

#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

struct stack_int;
typedef struct stack_int *stack;

void init_stack(stack *s);
bool is_empty_stack(stack s);
void push(stack s,void *i);
void *top(stack s);
void pop(stack s);

#endif