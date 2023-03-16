#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "configs.h"

int main(int argc, char *argv[]) {
    if (argc > 1) {
        printf("Foram fornecidos %d argumentos:\n", argc - 1);
        for (int i = 1; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
    } else {
        printf("Não foram fornecidos argumentos.\n");
    }
    return 0;
}


