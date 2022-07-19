// C++ program for addition of two polynomials
// using Linked Lists
#include <stdio.h>
#include<stdlib.h>

// Node structure containing power and coefficient of
// variable
typedef struct Node {
	int coeff;
	int pow;
	struct Node* next;
}node;

// Function to create new node
void create_node(int x, int y, node** temp)
{
	 node *r, *z;//z is deciding if link is nt empty
	z = *temp;
	if (z == NULL) {
		r = (node*)malloc(sizeof(node));
		r->coeff = x;
		r->pow = y;
		*temp = r;
		r->next = (node*)malloc(sizeof(node));
		r = r->next;
		r->next = NULL;
	}
	else {
		r->coeff = x;
		r->pow = y;
		r->next = (node*)malloc(sizeof(node));
		r = r->next;
		r->next = NULL;
	}
}

// Function Adding two polynomial numbers
void polyadd(node* poly1,node* poly2,
			node* poly)
{
	while (poly1->next && poly2->next) {
		// If power of 1st polynomial is greater then 2nd,
		// then store 1st as it is and move its pointer
		if (poly1->pow > poly2->pow) {
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff;
			poly1 = poly1->next;
		}

		// If power of 2nd polynomial is greater then 1st,
		// then store 2nd as it is and move its pointer
		else if (poly1->pow < poly2->pow) {
			poly->pow = poly2->pow;
			poly->coeff = poly2->coeff;
			poly2 = poly2->next;
		}

		// If power of both polynomial numbers is same then
		// add their coefficients
		else {
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff + poly2->coeff;
			poly1 = poly1->next;
			poly2 = poly2->next;
		}

		// Dynamically create new node
		poly->next
			= (node*)malloc(sizeof(node));
		poly = poly->next;
		poly->next = NULL;
	}
	while (poly1->next || poly2->next) {
		if (poly1->next) {
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff;
			poly1 = poly1->next;
		}
		if (poly2->next) {
			poly->pow = poly2->pow;
			poly->coeff = poly2->coeff;
			poly2 = poly2->next;
		}
		poly->next
			= (node*)malloc(sizeof(node));
		poly = poly->next;
		poly->next = NULL;
	}
}

// Display Linked list
void show(node* poly)
{
	while (poly->next != NULL) {
		printf("%dx^%d", poly->coeff, poly->pow);
		poly = poly->next;
		if (poly->coeff >= 0) {
			if (poly->next != NULL)
				printf("+");
		}
	}
}

// Driver code
int main()
{
node *poly1 = NULL, *poly2 = NULL, *poly = NULL;

	// Create first list of 5x^2 + 4x^1 + 2x^0
	create_node(5, 2, &poly1);
	create_node(4, 1, &poly1);
	create_node(2, 0, &poly1);

	// Create second list of -5x^1 - 5x^0
	create_node(-5, 1, &poly2);
	create_node(-5, 0, &poly2);

	printf("1st Number: ");
	show(poly1);

	printf("\n2nd Number: ");
	show(poly2);

	poly = (node*)malloc(sizeof(node));

	// Function add two polynomial numbers
	polyadd(poly1, poly2, poly);

	// Display resultant List
	printf("\nAdded polynomial: ");
	show(poly);

	return 0;
}
