#include <stdio.h>

int main() {

    FILE *f = fopen("output.txt","w");
    fprintf(f, "Hola Nicolas Caceres!");
    fclose(f);

    return 0;
}
