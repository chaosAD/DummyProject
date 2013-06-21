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

List *createList() {
  List *list = malloc(sizeof(List));
  if(!list) memAllocError();
  return list;
}
