#define _GNU_SOURCE //Required for memfrob() ?

#include <string.h>

#include "memfrobber.h"

void memfrobber(char *thisString) {
  int length = strlen(thisString);
  memfrob(thisString, length);
}
