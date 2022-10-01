/*
 * library.h
 *
 *  Created on: 1 de out. de 2022
 *  Author: henry
 */

#ifndef LIBRARY_H_
#define LIBRARY_H_

/* Includes:
====================================================*/
	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>

/* Prototypes:
====================================================*/
	void menu(void);
	void push(tree original, tree root, int *pointer);
	void inserting(tree original, tree root, int *pointer, int i);
	void pop(tree originalTree);
	void display(tree originalTree);

/* Structure:
====================================================*/
	typedef struct tree tree;
	struct tree{
		int node;
		tree *right;
		tree *left;
	};

#endif /* LIBRARY_H_ */
