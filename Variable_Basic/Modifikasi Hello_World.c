#include <stdio.h>
#include <string.h>

int main(void) {
    char name[50]; // buffer gede biar gak kepotong

    do {
        printf("Indicate who you are. ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0; // hapus enter

        if (strlen(name) > 10) {
            printf("Coba lagi, max 10 karakter: ");
        }
    } while (strlen(name) > 10 || strlen(name) == 0);

    printf("Welcome Back, %s\n", name);
    return 0;
}