
#include <stdio.h>
#include "myfile.h"

char* hello_world(void) {
    return "hello world";
}

#ifdef FAB_MAIN
int main(int argc, char const *argv[]) {
    puts(hello_world());
}
#endif
