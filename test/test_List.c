#include "unity.h"
#include "List.h"

void setUp() {
}

void tearDown() {
}

void test_List_should_create_a_list_object() {
  List *list = createList();
  // Unfortunately we can only test if memory is allocated for List.
  // It would be better if we could also verify the allocated size.
  TEST_ASSERT_NOT_EQUAL(NULL, list);
}
