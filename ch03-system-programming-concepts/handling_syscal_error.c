// From p. 48

// see p. 51 for common header files
#include "../tlpi_hdr.h"

typedef enum { FALSE, TRUE } Boolean;

void try_open(char *pathname) {
  int fd = open(pathname, O_RDONLY);
  if (fd == -1) {
    perror("open");
    exit(EXIT_FAILURE);
  }
}

int main() {
  try_open("/a/b/c");
}

