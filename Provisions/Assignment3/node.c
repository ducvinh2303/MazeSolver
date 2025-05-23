/*
 * Implementation for Node
 * Author: Julian Dermoudy
 * Version: September 2023
 *
 * This file is complete.
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "assig_three223.h"
#include "node.h"


// Types

struct node_int {
	void *data;
	node next;
};


// Functions

/*
 *	init_node
 *	initialiser function.
 *	Pre-condition: none
 *	Post-condition: a new node is created and the node variable's
 *					data field refers to the parameter value (o) and
 *					next is NULL.  The address of the new node is
 *					assigned to the first parameter (np_
 *	Informally: creates a node
 */
void init_node(node *np, void *o)
{
	trace("init_node: init_node begins");

	*np = (node)malloc(sizeof(struct node_int)); // allocate memory for node
	(*np)->data = o; // assign the data value to the address
	(*np)->next = NULL; // initialize the next value of node to null

	trace("init_node: init_node ends");
}


/*
 * 	get_data
 *	Get function for data field.
 *	Pre-condition: the node variable is defined and valid
 *	Post-condition: the value of the node variable's data
 *					field is returned
 *	Informally: return the node variable's data field
 *
 *	return (void *) the data field of the current node
 */
void *get_data_node(node n)
{
	trace("get_data_node: get_data_node begins and ends");

	return (n->data); // get the address of data
}


/*
 * 	get_next
 *	Get function for next field.
 *	Pre-condition: the node variable is defined and valid
 *	Post-condition: the value of the node variable's next
 *					field is returned
 *	Informally: return the node variable's next field
 *
 *	return (node) the next field of the current node
 */
node get_next_node(node n)
{
	trace("get_next_node: get_next_node begins and ends");

	return (n->next); // get the next node
}


/*
 * 	set_data_node
 *	Set function for data field.
 *	Pre-condition: the given node is defined
 *	Post-condition: the value of the node variable's data
 *					field is updated to the given (void *) value
 *	Informally: update the node variable's data
 *
 * Param r (void *) value to be placed into the node's data field
 */
void set_data_node(node n, void *o)
{
	trace("set_data_node: set_data node begins");

	n->data = o; // assign the address of data

	trace("set_data_node: set_data_node ends");
}


/*
 * 	set_next_node
 *	Set function for next field.
 *	Pre-condition: the given node is defined
 *	Post-condition: the value of the node variable's next
 *					field is updated to the given (void *) value
 *	Informally: update the node variable's data
 *
 * Param n node value to be placed into the node's next field
 */
void set_next_node(node v, node n)
{
	trace("set_next_node: set_next_node ends");

	v->next = n; // assign the value of the next node

	trace("set_next_node: set_next_node ends");
}


