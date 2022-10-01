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

/* Structure:
====================================================*/
	typedef struct tree tree;
	struct tree{
		int node;
		tree *right;
		tree *left;
	};

#endif /* LIBRARY_H_ */
