#include <stdio.h>
#include <malloc.h>
#include "List.h"
/**


Dummbo


**/
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
  return list;
}
