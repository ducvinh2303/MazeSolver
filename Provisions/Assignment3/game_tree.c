/*
 *	Game Tree ADT Implementation
 *	Author: <<Duc Vinh Vu - 641029 and Ravin Boora - 656923>>
 *	Version: September 2023
 *
 *	This file holds the game_tree ADT which is a
 *	general game tree.  The game_tree is built using
 *	t_node ADTs.  A game_tree variable consists of a
 *	"root" field which refers to a t_node variable.
 *
 *	YOU NEED TO MAKE CHANGES TO THIS FILE!
 */


#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "t_node.h"
#include "game_state.h"
#include "game_tree.h"
#include "assig_three223.h"


 // Types

struct game_tree_int
{
	t_node root;			// the node at the top of the tree
};


// Functions

/*
 *	init_game_tree
 *	initialiser function.
 *	Pre-condition: none
 *	Post-condition: if the parameter value (e) is true then the
 *					game_tree variable's "root" field is set to NULL
 *					otherwise the game_tree variable's "root" field
 *					refers to a new t_node variable containing the
 *					parameter value (o), and with all other fields NULL
 *	Informally: creates either an empty tree or a leaf node as
 *				required
 *
 *	Param tp (game_tree *) address for created game_tree
 *	Param e bool whether or not an empty tree is required
 *	Param o	(void *) value for leaf node's data field
 */
void init_game_tree(game_tree* tp, bool e, void* o)
{
	trace("init_game_tree: init_game_tree starts");

	*tp = (game_tree)malloc(sizeof(struct game_tree_int));
	if (e)
	{
		trace("init_game_tree: creating empty game tree");
		(*tp)->root = NULL;
	}
	else
	{
		trace("init_game_tree: creating leaf");
		init_t_node(&((*tp)->root), o);
	}

	trace("init_game_tree: init_game_tree ends");
}


/*
 *	is_empty_game_tree
 *	Emptiness test.
 *	Pre-condition: the game_tree variable is defined and valid
 *	Post-condition: true is returned if the game_tree variable is
 *					empty, false is returned otherwise
 *	Informally: indicate if the game_tree contains no nodes
 *
 *	return boolean whether or not the game tree is empty
 */
bool is_empty_game_tree(game_tree t)
{
	trace("is_empty_game_tree: is_empty_game_tree starts and ends");

	// check variable t null or root of t null
	if (t == NULL || t->root == NULL) {
		return true;
	}
	return false;
}


/*
 *	get_data
 *	Get function for "root" instance variable's data value.
 *	Pre-condition: the game_tree variable is defined and valid
 *	Post-condition: the value of the game_tree variable's data
 *					field is returned
 * 	Informally: return the value within the root node
 *
 *	return (void *) the data item of the root node
 */
void* get_data(game_tree t)
{
	trace("get_data: get_data starts");

	if (is_empty_game_tree(t))
	{
		trace("get_data: empty game tree; quitting");
		fprintf(stderr, "get_data: empty game tree");
		exit(1);
	}

	trace("get_data: get_data ends");
	return get_t_node_data(t->root);
}


/*
 *	get_parent
 *	Get function for "root" instance variable's parent value.
 *	Pre-condition: the game_tree variable is defined and valid
 *	Post-condition: the value of the game_tree variable's parent
 *					field is returned in a newly constructed
 *					game_tree variable
 *	Informally: return the game_tree variable's parent
 *
 *	return game_tree the parent of the current node
 */
game_tree get_parent(game_tree t)
{
	game_tree p;	// parent

	trace("get_parent: get_parent starts");

	if (is_empty_game_tree(t))
	{
		trace("get_parent: empty game tree; quitting");
		fprintf(stderr, "get_parent: empty game tree");
		exit(1);
	}

	// build game_tree for parent and return it
	init_game_tree(&p, true, NULL);
	p->root = get_t_node_parent(t->root);

	trace("get_parent: get_parent ends");
	return p;
}


/*
*	get_left
*	Get function for "root" instance variable's left value.
*	Pre-condition: the game_tree variable is defined and valid
*	Post-condition: the value of the game_tree variable's left
*					field is returned
*	Informally: return the left branch of the tree
*
*	return game_tree the left branch of the root node
*/
game_tree get_left(game_tree t)
{
	game_tree l;	// left branch

	trace("get_left: get_left starts");

	//COMPLETE ME!!!

	// returns the left vertex 
	if (is_empty_game_tree(t))
	{
		trace("get_parent: empty game tree; quitting");
		fprintf(stderr, "get_parent: empty game tree");
		exit(1);
	}

	// build game_tree for parent and return it
	init_game_tree(&l, true, NULL);
	l->root = get_t_node_left(t->root);

	trace("get_left: get_left ends");
	return l;
}


/*
*	get_middle
*	Get function for "root" instance variable's middle field.
*	Pre-condition: the game_tree variable is defined and valid
*	Post-condition: the value of the game_tree variable's middle
*					field is returned in a newly
*					constructed game_tree variable
*	Informally : return the game_tree variable's middle child
*
*	return game_tree the middle child of the current node
*/
game_tree get_middle(game_tree t)
{
	game_tree m;	// middle branch

	trace("get_middle: get_middle starts");

	//COMPLETE ME!!!

	// returns the middle vertex 
	if (is_empty_game_tree(t))
	{
		trace("get_parent: empty game tree; quitting");
		fprintf(stderr, "get_parent: empty game tree");
		exit(1);
	}

	// build game_tree for parent and return it
	init_game_tree(&m, true, NULL);
	m->root = get_t_node_middle(t->root);

	trace("get_middle: get_middle ends");
	return m;
}


/*
 * 	get_right
 *	Get function for "root" instance variable's right value.
 *	Pre-condition: the game_tree variable is defined field valid
 *	Post-condition: the value of the game_tree variable's right
 *					field is returned in a newly constructed
 *					game_tree variable
 *	Informally: return the game_tree variable's right branch
 *
 *	return game_tree the right branch of the current node
 */
game_tree get_right(game_tree t)
{
	game_tree r;	// right branch

	trace("get_right: get_right starts");

	//COMPLETE ME!!!

	// returns the right vertex 
	if (is_empty_game_tree(t))
	{
		trace("get_parent: empty game tree; quitting");
		fprintf(stderr, "get_parent: empty game tree");
		exit(1);
	}

	// build game_tree for parent and return it
	init_game_tree(&r, true, NULL);
	r->root = get_t_node_right(t->root);

	trace("get_right: get_right ends");
	return r;
}


/*
 *	set_data
 *	Set function for "root" instance variable's data field.
 *	Pre-condition: the game_tree variable is defined and valid
 *	Post-condition: the t_node variable's data field is altered to
 *					hold the given (o) value
 *	Informally: store the given value in the root node of the
 *				game_tree variable
 *
 *	param o (void *) to install as data for root node
 */
void set_data(game_tree t, void* o)
{
	trace("set_data: set_data starts");

	if (is_empty_game_tree(t))
	{
		trace("set_data: empty game tree; quitting");
		fprintf(stderr, "set_data: empty game tree");
		exit(1);
	}

	// store data value
	set_t_node_data(t->root, o);

	trace("set_data: set_data ends");
}


/*
 *	set_parent
 *	Set function for "root" instance variable's parent field.
 *	Pre-condition: the game_tree variable is defined and valid
 *	Post-condition: the t_node variable's parent field is altered
 *					to hold the given (p) value
 *	Informally: assign the given value as the parent of the
 *				game_tree variable
 *
 *	param p game_tree to be set as parent of current game tree
 */
void set_parent(game_tree t, game_tree p)
{
	trace("set_parent: set_parent starts");

	if (is_empty_game_tree(t))
	{
		trace("set_parent: empty game tree; quitting");
		fprintf(stderr, "set_parent: empty game tree");
		exit(1);
	}

	// update parent field
	set_t_node_parent(t->root, p->root);

	trace("set_parent: set_parent ends");
}


/*
*	set_left
*	Set function for "root" instance variable's left field.
*	Pre-condition: the game_tree variable is defined and valid
*	Post-condition: the t_node variable's left field is altered
*					to hold the given (l) value
*	Informally: assign the given value as the left branch of the
*				game_tree variable
*
*	param l game_tree left branch for root of current game tree
*/
void set_left(game_tree t, game_tree l)
{
	trace("set_left: set_left starts");

	//COMPLETE ME!!!

	// assign the left vertex to t
	if (is_empty_game_tree(t))
	{
		trace("set_parent: empty game tree; quitting");
		fprintf(stderr, "set_parent: empty game tree");
		exit(1);
	}

	// update parent field
	set_t_node_left(t->root, l->root);

	trace("set_left: set_left ends");
}


/*
 *	set_middle
 *	Set function for "root" instance variable's middle child field.
 *	Pre-condition: the game_tree variable is defined and valid
 *	Post-condition: the t_node variable's middle child field is altered
 *					to hold the given (m) value
 *	Informally: assign the given value as the middle child of the
 *				game_tree variable
 *
 *	param m game_tree to be set as middle child of current game tree
 */
void set_middle(game_tree t, game_tree m)
{
	trace("set_middle: set_middle starts");

	//COMPLETE ME!!!

	// assign the middle vertex to t
	if (is_empty_game_tree(t))
	{
		trace("set_parent: empty game tree; quitting");
		fprintf(stderr, "set_parent: empty game tree");
		exit(1);
	}

	// update parent field
	set_t_node_middle(t->root, m->root);

	trace("set_middle: set_middle ends");
}


/*
*	set_right
*	Set function for "root" instance variable's right child field.
*	Pre-condition: the game_tree variable is defined and valid
*	Post-condition: the t_node variable's right child field is altered
*					to hold the given (r) value
*	Informally: assign the given value as the right child of the
*				game_tree variable
*
*	param r game_tree to be set as right child of current game tree
*/
void set_right(game_tree t, game_tree r)
{
	trace("set_right: set_right starts");

	//COMPLETE ME!!!

	// assign the right vertex to t
	if (is_empty_game_tree(t))
	{
		trace("set_parent: empty game tree; quitting");
		fprintf(stderr, "set_parent: empty game tree");
		exit(1);
	}

	// update parent field
	set_t_node_right(t->root, r->root);

	trace("set_right: set_right ends");
}


/*
 *	generate_levelBF
 *	Generate the next level of the tree
 *	Pre-condition: the given tree is defined and the given queue
 *				   is defined
 *	Post-condition: an additional level of possible moves has
 *					been added to the given game tree and each
 *					tree node of the new level also has been
 *					added to the queue.
 *	Informally: generate the next level of the game tree
 *
 *	param q Queue of reachable but unexpanded game trees
 */
void generate_levelBF(game_tree t, queue q)
{
	const int HORIZ_MOVES[] = { -1, 0, +1, 0 };	// moves left/right
	const int VERT_MOVES[] = { 0, -1, 0, +1 };	// moves up/down
	const int MOVE_COUNT = 4;					// number of potential moves

	game_tree c;		// new game tree for new moves
	game_state s, n;	// original game state and copy
	int m, x, y;		// moves, new row, new column
	char msg[100];		// message for debugging
	int count;			// number of alternative moves from here

	trace("generate_levelBF: generate_levelBF starts");

	// obtain game state from game tree
	s = (game_state)(get_data(t));
	if (SHOW_PROGRESS)
	{
		show_game_state(s);
		printf("Hit <Enter> to continue...");
		getchar();	// pause until user wants to continue
	}
	////COMPLETE ME!!!

	// If the program is resolved remove all queues
	if (solved(s)) {
		while (is_empty_queue(q) == false) {
			rear(q);
		};
		return;
	}
	int row = get_current_row(s); // assign row
	int col = get_current_column(s); // assign column

	// Perform route finding in moving directions
	for (int i = MOVE_COUNT - 1; i >= 0; i--) {
		int x = row + HORIZ_MOVES[i]; // plus row for direction horizontal
		int y = col + VERT_MOVES[i]; // plus column for direction horizontal

		// Check if the direction of movement is valid
		if (valid(s, x, y)) {
			n = clone(s); // clone state of previous state
			move(n, x, y); // Perform migration for cloned state
			init_game_tree(&c, false, n); // init game tree
			set_parent(c, t); // set parent t for c game tree
			add(q, c); // add c game tree to queue
		}
	}

	trace("generate_levelBF: generate_levelBF ends");
}


/*
 *	build_gameBF
 *	Generate the game tree in a breadth-first manner
 * 	Pre-condition: the given queue and game tree are defined
 *	Post-condition: If the given tree isn't solved, an additional level
 *					of possible moves is added to the given game tree
 *					and each tree node of the new level also is added to
 *					the queue.  Finally, the next tree is determined by
 *					removing the front of the queue and the process
 *					continues until the queue is empty
 *	Informally: generate the game tree from the current point
 *				in a breadth-first manner until solved or all squares are
 *				visited
 *
 *	param q queue of reachable but unexpanded game trees
 *
 *	return	the game tree with the first found solution, or an empty game
 *			tree if there is no solution
 */
game_tree build_gameBF(game_tree t, queue q)
{
	game_tree c;
	trace("build_gameBF: build_gameBF starts");
	init_game_tree(&c, true, NULL); // init game tree for c
	add(q, t); // add first t game tree for queue q

	// loop until q is empty
	while (is_empty_queue(q) == false) {
		c = (game_tree)front(q); // assign c equal to the value of the first queue
		rear(q); // Delete the first queue once the value has been obtained
		generate_levelBF(c, q); // Start the BFS algorithm to solve
	}
	trace("build_gameBF: build_gameBF ends");
	return c; // return c game tree when problem is resolved
}


/*
 *	generate_levelDF
 *	Generate the next level of the tree
 *	Pre-condition: the given tree is defined, the given stack
 *				   is defined
 *	Post-condition: an additional level of possible moves has
 *					been added to the given game tree and each
 *					tree node of the new level also has been
 *					added to the stack.
 *	Informally: generate the next level of the game tree
 *
 *	param k Stack of reachable but unexpanded game trees
 */
void generate_levelDF(game_tree t, stack k)
{
	const int HORIZ_MOVES[] = { -1, 0, +1, 0 };	// moves left/right
	const int VERT_MOVES[] = { 0, -1, 0, +1 };	// moves up/down
	const int MOVE_COUNT = 4;					// number of potential moves

	game_tree c;		// new game tree for new moves
	game_state s, n;	// original game state and copy
	int m, x, y;		// moves, new row, new column
	char msg[100];		// message for debugging
	int count;			// number of alternative moves from here

	trace("generate_levelDF: generate_levelDF starts");

	// obtain game state from game tree
	s = (game_state)(get_data(t));
	if (SHOW_PROGRESS)
	{
		show_game_state(s);
		printf("Hit <Enter> to continue...");
		getchar();	// pause until user wants to continue
	}

	//COMPLETE ME!!!

	// If the program is resolved remove all stack
	if (solved(s)) {
		trace("generate_levelBF: generate_levelBF starts");
		while (is_empty_stack(k) == false) {
			pop(k);
		};
		return;
	}
	int row = get_current_row(s); // assign row
	int col = get_current_column(s); // assign column

	// Perform route finding in moving directions
	for (int i = MOVE_COUNT - 1; i >= 0; i--) {
		int x = row + HORIZ_MOVES[i]; // plus row for direction horizontal
		int y = col + VERT_MOVES[i]; // plus column for direction horizontal

		// Check if the direction of movement is valid
		if (valid(s, x, y)) {
			n = clone(s); // clone state of previous state
			move(n, x, y); // Perform migration for cloned state
			init_game_tree(&c, false, n); // init game tree
			set_parent(c, t); // set parent t for c game tree
			push(k, c); // add c game tree to stack
		}
	}

	trace("generate_levelDF: generate_levelDF ends");
}


/*
 *	build_gameDF
 *	Generate the game tree in a depth-first manner
 *	Pre-condition: the given queue and game tree are defined
 *	Post-condition: If the given tree isn't solved, an additional level
 *					of possible moves is added to the given game tree
 *					and each tree node of the new level also is added to
 *					the stack.  Finally, the next tree is determined by
 *					removing the top of the stack and the process
 *					continues until the stack is empty
 *	Informally: generate the game tree from the current point
 *				in a depth-first manner until solved or all squares are
 *				visited
 *
 *	param k stack of reachable but unexpanded game trees
 *
 *	return	the game tree with the first found solution, or an empty game
 *			tree if there is no solution
 */
game_tree build_gameDF(game_tree t, stack k)
{
	game_tree c;	// the next game tree in the stack

	trace("build_gameDF: build_gameDF starts");

	//COMPLETE ME!!!
	init_game_tree(&c, true, NULL); // init game tree for c
	push(k, t); // add first t game tree for stack k


	// loop until k is empty
	while (is_empty_stack(k) == false) {
		c = (game_tree)top(k); // assign c equal to the value of the first stack
		pop(k); // Delete the first queue once the value has been obtained
		generate_levelDF(c, k); // Start the DFS algorithm to solve
	}

	trace("build_gameDF: build_gameDF ends");
	return c; // return c game tree when problem is resolved
}


/*
 *	to_string_game_tree
 *	String conversion for tree
 *	Pre-condition: none
 *	Post-condition: a string variable is returned consisting of the
 *				string representation of all items in the game_tree,
 *				from top to bottom in depth-first order, separated by
 *				" " and contained within "<" and ">"
 *	Informally: produce a string representation of the game tree
 *
 *	return (char *) printable contents of game tree
 */
char* to_string_game_tree(game_tree t)
{
	game_tree c;
	char* s;

	trace("to_string_game_tree: to_string_game_tree starts");

	if (is_empty_game_tree(t))
	{
		trace("to_string_game_tree: to_string_game_tree ends");
		return "<>";
	}
	else
	{
		s = (char*)malloc(200 * 5 * sizeof(char));

		sprintf(s, "%s (%d,%d) ", s, get_row_size(get_data(t)), get_column_size(get_data(t)));
		c = get_left(t);
		if (!is_empty_game_tree(c))
		{
			sprintf(s, "%s %s ", s, to_string_game_tree(c));
		}
		c = get_middle(t);
		if (!is_empty_game_tree(c))
		{
			sprintf(s, "%s %s ", s, to_string_game_tree(c));
		}
		c = get_right(t);
		if (!is_empty_game_tree(c))
		{
			sprintf(s, "%s %s ", s, to_string_game_tree(c));
		}
	}

	trace("to_string_game_tree: to_string_game_tree ends");

	return s;
}

