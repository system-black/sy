#include <stdlib.h>

static unsigned char _random_chars[256];
static unsigned int _random_ints[1024];

unsigned char random_char()
{
}

unsigned int random_int()
{
}

void random_start()
{
  unsigned int i;

  for (i = 0; i < 256; i++) {
    _random_chars[i] = (unsigned char) random() % 256;
  }

  for (i = 0; i < 1024; i++) {
    _random_ints[i] = (unsigned int) random();
  }
}
