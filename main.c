#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main() {
	int x;
	printf("Write your Tests for your linked list implementation\n");
	list_t *mylist;

	mylist = list_alloc();
	list_print(mylist);
	list_add_to_front(mylist, 10);
	list_add_to_front(mylist, 20);
	list_add_to_front(mylist, 30);
	list_print(mylist);
	list_add_to_front(mylist, 40);
	list_add_to_front(mylist, 50);
	list_add_to_front(mylist, 60);
	list_add_to_front(mylist, 70);
	list_add_to_front(mylist, 80);
	list_add_to_front(mylist, 90);
	list_add_to_front(mylist, 100);

	if (strcmp("100->90->80->70->60->50->40->30->20->10->NULL", listToString(mylist)) != 0) {
		printf("list_add_to_front : FAILED\n");
	}

	list_print(mylist);
	list_remove_at_index(mylist, 3);
	list_print(mylist);

	if (strcmp("100->90->70->60->50->40->30->20->10->NULL", listToString(mylist)) != 0) {
		printf("list_remove_at_index : FAILED\n");
	}

	// Additional Tests

	// Test list_length
	printf("List length: %d\n", list_length(mylist)); // Should print 9

	// Test list_remove_from_back
	elem removed_back = list_remove_from_back(mylist);
	printf("Removed from back: %d\n", removed_back); // Should print 10

	// Test list_remove_from_front
	elem removed_front = list_remove_from_front(mylist);
	printf("Removed from front: %d\n", removed_front); // Should print 100

	// Test list_get_elem_at
	int index = 3;
	elem at_index = list_get_elem_at(mylist, index);
	printf("Element at index %d: %d\n", index, at_index); // Should print 70

	// Test list_get_index_of
	elem value_to_find = 60;
	int index_of_value = list_get_index_of(mylist, value_to_find);
	printf("Index of %d: %d\n", value_to_find, index_of_value); // Should print 5

	// Test list_is_in
	elem value_to_check = 80;
	bool is_in_list = list_is_in(mylist, value_to_check);
	printf("%d is in the list: %s\n", value_to_check, is_in_list ? "true" : "false"); // Should print "80 is in the list: true"

	// Test list_add_at_index
	list_add_at_index(mylist, 55, 2); // Add 55 at index 2
	list_print(mylist); // Should print the updated list

	// Test list_remove_at_index
	int remove_index = 7;
	elem removed_value = list_remove_at_index(mylist, remove_index);
	printf("Removed value at index %d: %d\n", remove_index, removed_value); // Should print "Removed value at index 7: 60"
	list_print(mylist); // Should print the updated list

	
	printf("The list length is %d\n", list_length(mylist));
  printf("Value at %d in the list?: %d\n", -4, list_get_elem_at(mylist, -4));
  printf("Value at %d in the list?: %d\n", 10, list_get_elem_at(mylist, 10));
  printf("Value at %d in the list?: %d\n", 6, list_get_elem_at(mylist, 6));
  printf("Value at %d in the list?: %d\n", 5, list_get_elem_at(mylist, 5));
  printf("Value at %d in the list?: %d\n", 0, list_get_elem_at(mylist, 0));
  list_free(mylist);
  list_print(mylist);
  printf("Value at %d in the list?: %d\n", 0, list_get_elem_at(mylist, 0));
  list_remove_at_index(mylist, 0);
  printf("Is %d in the list?: %d\n", 21, list_is_in(mylist, 21));
  printf("Index of %d?: %d\n", 21, list_get_index_of(mylist, 21));
  list_add_to_front(mylist, 10);
  list_add_to_front(mylist, 20);
  list_add_to_front(mylist, 30);
  list_add_to_front(mylist, 40);
  list_add_to_front(mylist, 50);
  list_print(mylist);
  printf("Index of %d?: %d\n", 50, list_get_index_of(mylist, 50));
  printf("Index of %d?: %d\n", 81, list_get_index_of(mylist, 81));
  printf("Index of %d?: %d\n", 10, list_get_index_of(mylist, 10));
  printf("Index of %d?: %d\n", 30, list_get_index_of(mylist, 30));
  list_add_to_front(mylist, 60);
  list_print(mylist);
  printf("Index of %d?: %d\n", 50, list_get_index_of(mylist, 50));
  printf("Index of %d?: %d\n", 60, list_get_index_of(mylist, 60));
  list_add_to_front(mylist, 10);
  list_print(mylist);
  printf("Index of %d?: %d\n", 10, list_get_index_of(mylist, 10));
  list_add_to_back(mylist, 40);
  list_print(mylist);
  printf("Index of %d?: %d\n", 40, list_get_index_of(mylist, 40));

	printf("The list length is %d\n", list_length(mylist));
  printf("Value at %d in the list?: %d\n", -4, list_get_elem_at(mylist, -4));
  printf("Value at %d in the list?: %d\n", 10, list_get_elem_at(mylist, 10));
  printf("Value at %d in the list?: %d\n", 6, list_get_elem_at(mylist, 6));
  printf("Value at %d in the list?: %d\n", 5, list_get_elem_at(mylist, 5));
  printf("Value at %d in the list?: %d\n", 0, list_get_elem_at(mylist, 0));
  list_free(mylist);
  list_print(mylist);
  printf("Value at %d in the list?: %d\n", 0, list_get_elem_at(mylist, 0));
  list_remove_at_index(mylist, 0);
  printf("Is %d in the list?: %d\n", 21, list_is_in(mylist, 21));
  printf("Index of %d?: %d\n", 21, list_get_index_of(mylist, 21));
  list_add_to_front(mylist, 10);
  list_add_to_front(mylist, 20);
  list_add_to_front(mylist, 30);
  list_add_to_front(mylist, 40);
  list_add_to_front(mylist, 50);
  list_print(mylist);
  printf("Index of %d?: %d\n", 50, list_get_index_of(mylist, 50));
  printf("Index of %d?: %d\n", 81, list_get_index_of(mylist, 81));
  printf("Index of %d?: %d\n", 10, list_get_index_of(mylist, 10));
  printf("Index of %d?: %d\n", 30, list_get_index_of(mylist, 30));
  list_add_to_front(mylist, 60);
  list_print(mylist);
  printf("Index of %d?: %d\n", 50, list_get_index_of(mylist, 50));
  printf("Index of %d?: %d\n", 60, list_get_index_of(mylist, 60));
  list_add_to_front(mylist, 10);
  list_print(mylist);
  printf("Index of %d?: %d\n", 10, list_get_index_of(mylist, 10));
  list_add_to_back(mylist, 40);
  list_print(mylist);
  printf("Index of %d?: %d\n", 40, list_get_index_of(mylist, 40));


	// Clean up
	list_free(mylist);

	return 0;
}
