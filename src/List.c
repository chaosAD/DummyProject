#include <stdio.h>
#include <malloc.h>
#include "List.h"

/**
 * Dump error insufficient memory message and terminate the program
 */
void memAllocError() {
  printf("System Error: insufficient memory\n");
  exit(-1);
}

/**
 * Create a list object
 */
List *createList() {
  List *list = malloc(sizeof(List));
  if(!list) memAllocError();
  list->next = NULL;
  return list;
}

/**
 * Append object to list.
 * STATUS: Work-in-progress
 */
void listAppend(List **head, void *obj) {
  List *cur, *list = createList();

  list->item = obj;
  if((cur = *head)) {
    while(cur->next) {    // Traverse till reach the end of list
      cur = cur->next;
    }
    cur->next = list;     // Append item to the end of list
  } else {
    *head = list;
  }
}

/**
 * Simple dump of item. Assume item is an int
 * TODO: fix the asssumption
 * STATUS: Work-in-progress
 */
void listDump(List *head) {
  if(head) {
    while(head) {
      printf("%d ", (int)head->item);
      head = head->next;
    }
    printf("\n");
  }
}
