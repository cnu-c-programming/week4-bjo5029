#include <stdio.h>

void swap_endian(int *x) {
  unsigned char *bytes = (unsigned char *)x;
  unsigned char tmp;

  tmp = bytes[0];
  bytes[0] = bytes[3];
  bytes[3] = tmp;
  tmp = bytes[1];
  bytes[1] = bytes[2];
  bytes[2] = tmp;
}

int main() {
  int x = 0x12345678;

  printf("%x\n", x);
  swap_endian(&x);
  printf("%x\n", x);

  return 0;
}
