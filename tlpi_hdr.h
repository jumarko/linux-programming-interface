// see p. 51 for common header files
#ifndef TLPI_HDR_H
#define TLPI_HDR_H // prevent accidental double inclusion

#include <sys/types.h> // type definitions
#include <stdio.h> // standard IO fns
#include <stdlib.h> // commonly used lib functions plus EXIT_SUCCESS and EXIT_FAILURE
#include <unistd.h> // prototypes for system calls
#include <fcntl.h> // defines flags like O_RDONLY
#include <errno.h>  // declares errno and error constants
#include <string.h> // commonly used string functions

#define min(m,n) ((m) < (n) ? (m) : (n))
#define max(m,n) ((m) > (n) ? (m) : (n))

#endif
