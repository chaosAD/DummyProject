#ifndef __LIST_HEADER__
#define __LIST_HEADER__

#include "Object.h"

typedef struct List List;

typedef struct List {
  char *(*repr)(Object *obj);       // Representation
  List *next;
  void *item;
} List;

List *createList(void);
void listAppend(List **head, void *obj);
void listPrepend(List **head, void *obj);
void listDump(List *head);

#endif  //  __LIST_HEADER__
