#include <stdlib.h>

char randchar() {
    return 'A' + rand() % 26;   // Select any random character between A-Z and return it.
}