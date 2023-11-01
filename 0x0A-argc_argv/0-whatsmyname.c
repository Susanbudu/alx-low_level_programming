#include <stdio.h>
#include "main.h"
int main(int argc, char *argv[]) {
    if (argc > 0) {
        printf("%s\n", argv[0]);
    } else {
        printf("Unable to determine program name.\n");
    }

    return 0;
}

