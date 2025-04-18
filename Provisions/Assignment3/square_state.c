/*
 *	Square State ADT Implementation
 *	Author: <<Duc Vinh Vu - 641029 and Ravin Boora - 656923>>
 *	Version: September 2023
 *
 *	This file holds the square_state ADT.  It comprises
 *	whether a square has been visited (a bool), and what its 
 *	value is (an int).
 *
 *	YOU NEED TO MAKE CHANGES TO THIS FILE!
 */


#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "square_state.h"
#include "assig_three223.h"


// Types

struct square_state_int {
	int value;		// value of square (wall, goal, etc.)
	bool visited;	// whether or not it's been visited yet
};


// Constants

const int VISITED_SQUARE = 250;		// ASCII code for visited
const int UNVISITED_SQUARE = 32;	// ASCII code for unvisited
const int GOAL_SQUARE = 42;			// ASCII code for goal
const int WALL_SQUARE = 178;		// ASCII code for wall


// Functions

/*
 *	init_quare_state
 *	initialiser function.
 *	Pre-condition: none
 *	Post-condition: a square_state variable is created and pointed
 *					to by the first parameter.  Its visited field
 *					is set to false and its value field is set to
 *					the given value
 *	Informally: creates an unvisited square of given value
 *
 *	Param sp (square_state *) address for created square
 *	Param v int intended value for square
 */
void init_square_state(square_state *sp, int v)
{
	trace("init_square_state: init_square_state begins");

	*sp = (square_state)malloc(sizeof(struct square_state_int));
	(*sp)->value = v;
	(*sp)->visited = false;

	trace("init_square_state: init_square_state ends");
}


/*
 * 	set_value
 *	Set function for value field.
 *	Pre-condition: the given square_state is defined
 *	Post-condition: the value of the square_state variable's value
 *					field is updated to the given int value
 *	Informally: update the square_state variable's value
 *
 *	Param v int value to be placed into the squaree_state's value
 *		field
 */
void set_value(square_state s, int v)
{
	trace("set_value: set_value begins");

	//COMPLETE ME!!!
	s->value = v; // assign value to block

	trace("set_value: set_value ends");
}


/*
 * 	get_value
 *	Get function for value field.
 *	Pre-condition: none
 *	Post-condition: the value of the square_state variable's value
 *					field is returned
 *	Informally: return the square_state's variable's value
 *
 *	return int the value field of the square
 */
int get_value(square_state s)
{
	trace("get_value: get_value begins and ends");

	return s->value; // return value of block
}


/*
 * 	set_visited
 *	Set function for visited field.
 *	Pre-condition: the given square_state is defined
 *	Post-condition: the value of the square_state variable's
 *					visited field is updated to the given bool
 *					value
 *	Informally: update the square_state variable's visited field
 *
 *	Param v bool value to be placed into the square_state's
 *		visited field
 */
void set_visited(square_state s, bool v)
{
	trace("set_visited: set_visited begins");

	s->visited = v; // assign visited to block

	trace("set_visited: set_visited ends");
}


/*
 * 	get_visited
 *	Get function for visited field.
 *	Pre-condition: none
 *	Post-condition: the value of the square_state variable's
 *					visited field is returned
 *	Informally: return the square_state variable's value
 *
 *	return bool the visited status of the square
 */
bool get_visited(square_state s)
{
	trace("get_visited: get_visited begins and ends");

	return s->visited; // return value of visited of block
}


/*
 * 	clone_square
 *	Clone function for square_state.
 *	Pre-condition: the given square_state is defined
 *	Post-condition: a copy of the square_state variable is
 *					created and returned
 *	Informally: clone the square_state variable
 *
 *	return square_state which is a copy of the given variable
 */
square_state clone_square(square_state s)
{
	square_state n;

	trace("clone_square: clone_square begins");

	init_square_state(&n, get_value(s));	// create new square
	set_visited(n, get_visited(s));	// update visited status

	trace("clone_square: clone square ends");

	return n;
}


/*
 * 	show_square_state
 *	Display function for square_state.
 *	Pre-condition: the given square_state is defined
 *	Post-condition: the ASCII character representation of the given
 *					square has been displayed
 *	Informally: display the square_state variable
 *
 *	Param here bool whether or not the given square is the currently
 *		occupied square
 *	Param WALL (const int) the numeric value of a wall square
 *	Param GOAL (const int) the numeric value of the goal square
 */
void show_square_state(square_state s, bool here, const int WALL, const int GOAL)
{
	trace("show_square_state: show_square_state begins");

	if (s->value == WALL)
	{
		printf("%c", WALL_SQUARE);
	}
	else
	{
		if (s->value == GOAL)
		{
			printf("%c", GOAL_SQUARE);
		}
		else
		{
			if (here)
			{
				printf("X");
			}
			else
			{
				if (s->visited)
				{
					printf("%c", VISITED_SQUARE);
				}
				else
				{
					printf("%c", UNVISITED_SQUARE);
				}
			}
		}
	}

	trace("show_square_state: show_square_state ends");
}
