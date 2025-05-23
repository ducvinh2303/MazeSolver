/*
 *	Queue
 *	Author: J.R.Dermoudy
 *	Version: September 2023
 *
 *	This file holds the specification of the Queue.
 *
 *	This file is complete.
 */

#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

struct queue_int;
typedef struct queue_int *queue;

void init_queue(queue *q);
bool is_empty_queue(queue q);
void add(queue q,void *i);
void *front(queue q);
void rear(queue q);
char *to_string_queue(queue q, char *f);

#endif