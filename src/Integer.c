#define _GNU_SOURCE

#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include "Integer.h"

/**
 * Dump error insufficient memory message and terminate the program
 */
static void memAllocError() {
  printf("System Error: insufficient memory\n");
  exit(-1);
}

static char *repr(Object *obj) {
  char *str = asprintf("%d", ((Integer *)obj)->value);
  if(!str) memAllocError();
  return str;
}

/**
 * Create a integer object
 */
Integer *integerCreate(int value) {
  Integer *integer = malloc(sizeof(Integer));
  if(!integer) memAllocError();
  integer->repr = NULL;
  return integer;
}
