#ifndef __OBJECT_HEADER__
#define __OBJECT_HEADER__

typedef struct Object Object;

typedef struct Object {
  char *(*repr)(Object *obj);     // Representation
} Object;

Object *objectCreate(void);

#endif  //  __OBJECT_HEADER__
