#ifndef __LIST_HEADER__
#define __LIST_HEADER__

typedef struct List List;

typedef struct List {
  List *next;
  void *item;
} List;

List *createList(void);
void listAppend(List **head, void *obj);
void listDump(List *head);

#endif  //  __LIST_HEADER__
