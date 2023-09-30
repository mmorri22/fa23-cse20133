#include "sllist.h"


sllist* constructor(){

    sllist* temp_node = (sllist *)malloc( sizeof(sllist) );

		temp_node->head_node = NULL;

    return temp_node;

}


// Create the constructor method for sllist
void insert( sllist* the_list, int the_value ){

	// Create a sll_node pointer called insert_node


	// Set the insert_node's data to the_value and next_node to NULL


	// Dr. Morrison's Golden Rule of Pointers
	// Check if the list is empty


		// Set the head node equal to insert_node


		// And return



	// Otherwise, create a curr_ptr equal to the head_node


	// Iterate until the next_node is NULL





	// Set curr_ptr's next_node equal to insert_node


}


// Step 8 - Print the Singly Linked List
void print_list( sll_node* head_node ){

	// Just change node_0 to head_node

	sll_node* curr_ptr = head_node;
	while( curr_ptr != NULL ){

		fprintf( stdout, "Node Base Address: %p, ", curr_ptr );
		fprintf( stdout, "Data Value: %d, ", curr_ptr->data );
		fprintf( stdout, "Location of Next Node: %p, ", &(curr_ptr->next_node) );
		fprintf( stdout, "Value of Next Node: %p\n", curr_ptr->next_node );

		// Iterate through the next node
		curr_ptr = curr_ptr->next_node;

	}
	fprintf( stdout, "\n" );

}


// Free all the elements
void destructor( sll_node* curr_ptr ){

	// Dr. Morrison's Golden Rule of Pointers



	// Recursively call destructor on the next node


	// Free the current pointer


}

#endif
