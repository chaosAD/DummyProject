#ifndef __INTEGER_HEADER__
#define __INTEGER_HEADER__

#include "Object.h"

typedef struct {
  char *(*repr)(Object *obj);     // Representation
  int   value;
} Integer;

Integer *integerCreate(int value);

#endif  //  __INTEGER_HEADER__
