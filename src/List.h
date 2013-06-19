#ifndef __LIST_HEADER__
#define __LIST_HEADER__

typedef struct List List;

typedef struct List {
  List *next;
} List;

List *createList(void);

#endif  //  __LIST_HEADER__
