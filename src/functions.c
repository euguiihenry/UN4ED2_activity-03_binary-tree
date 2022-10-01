/*
 * functions.c
 *
 *  Created on: 1 de out. de 2022
 *      Author: henry
 */

/* Includes:
====================================================*/
	#include "library.h"

/* Menu:
====================================================*/
	void menu(void){
		// Global Variables for Menu:
			char choice;
			tree *root = (tree*) malloc (sizeof(tree));
			tree *originalTree = (tree*) malloc (sizeof(tree));
			int insertions[] = { 80, 22, 67, 72, 100, 103, 78, 75, 50, 18, 2};
			int numPointer;

		// Menu Loop:
			do{
				printf("\n\t========= MAIN MENU =========");
				printf("\n\n\t  A. Push node.");
				printf("\n\t  B. Pop node.");
				prinft("\n\t  C. Display tree.");
				printf("\n\t  D. Finish the program.\n");
				printf("\n\t=============================");
				printf("\n\n\tChoose a option above: ");

				scanf("%c", &choice);

				choice = toupper(choice);

				switch(choice) {
					case 'A':
						push(originalTree, root, *numPointer);
						break;

					case 'B':
						pop(originalTree);
						break;

					case 'C':
						display(originalTree);
						break;

					case 'D':
						printf("\n\t========= FINISHED! =========");
						exit(0);
						break;
				}
			} while(choice != 'C');

	}

/* Push:
====================================================*/
	void push(tree original, tree root, int *pointer) {
		/* The code must be separated in this following parts: (I'm going to use recursion)
		====================================================================================*/
			// Variables:
				int i = 0;

			// Saving the root:
				if (root == NULL) {
					root = *pointer;
				}

			// Inserting through recursion function:
				inserting(original, root, *pointer, i);
	}

/* Recursion Insertion:
====================================================*/
	void inserting(tree original, tree root, int *pointer, int i) {
		if(i > 10) {
			printf("\n\tInsertion Concluded");

		} else {
			// Open a new dynamic variable:
				tree newTree = (tree*) malloc (sizeof(tree));

			// Copying the original tree to the new one:
				newTree = original;

			// Showing the number that will be inserted:
				printf("\n\tInserting the number %i on binary tree", *(pointer+i));

			// Deciding for which side to go:
				// Left Side:
					if(*(pointer+i) < root) {
						while(newTree->left) {

						}

					}
				// Right Side:
					else {


					}

			// Copying the data from new tree to original:
				original = newTree;

			//Showing the feedback answer:
				printf("Number inserted!");

			// Updating the index of i:
				i++;

			// Recalling the function:
				inserting(original, root, *pointer, i);
		}
	}


/* Pop:
====================================================*/
	void pop(tree originalTree) {

	}

/* Display:
====================================================*/
	void display(tree originalTree) {

	}
