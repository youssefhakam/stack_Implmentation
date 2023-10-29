#include <stdio.h>
#include "stack.h"

int main() {
	Stack db;
	DATA_TYPE popped_element;
	Init(&db);
	printf("TOP = %d", db.TOP);
	printf("\n");
	Push('a', &db);
	Push('b', &db);
	Push('c', &db);
	Push('d', &db);
	Push('e', &db);
	Push('f', &db);
	Push('g', &db);
	Push('h', &db);
	Push('k', &db);
	
	printf("\n");
	if (isFull(&db)) {
		printf("Stack Overflow");
	}
	else {
		printf("Elements in the stack: ");
		for (int i = 0; i <= db.TOP; i++) {
			printf("%c ", db.elements[i]);
		}
	}
	printf("\n");
	printf("%d",StackSize(&db));
	printf("\n");
	while (Pop(&popped_element, &db)) {
		printf("Popped: %c\n", popped_element);
	}
	return 0;
}
