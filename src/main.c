#include <stdio.h>
#include "cstring.h"

int main(void) {
  Cstring cs = cstring_alloc("this is a test");
  cstring_dump(&cs);

  cstring_from(&cs, "   Hello world!     ");
  cstring_trim(&cs);
  cstring_dump(&cs);

  cstring_free(&cs);

  return 0;
}
