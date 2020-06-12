#include <stdlib.h>
#include <time.h>
#include "random.h"

void sy_start() {
  srandom(time(NULL));
  random_start();
}
