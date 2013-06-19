#ifndef __LIST_HEADER__
#define __LIST_HEADER__

typedef struct List_t {
  struct List_t *next;

} List;

List *createList(void);

#endif  //  __LIST_HEADER__
