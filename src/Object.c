#include <stdio.h>
#include <malloc.h>
#include "Object.h"

/**
 * Dump error insufficient memory message and terminate the program
 */
static void memAllocError() {
  printf("System Error: insufficient memory\n");
  exit(-1);
}

/**
 * Create an object
 */
Object *objectCreate() {
  Object *obj = malloc(sizeof(Object));
  if(!obj) memAllocError();
  obj->repr = NULL;
  return obj;
}
