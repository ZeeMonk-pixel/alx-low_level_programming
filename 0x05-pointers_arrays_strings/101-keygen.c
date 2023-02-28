#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_PASSWORD_LENGTH 100


char random_lowercase() {
    return rand() % 26 + 'a';
}

char random_uppercase() {
    return rand() % 26 + 'A';
}

char random_digit() {
    return rand() % 10 + '0';
}

char random_special() {
    char special[] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+', '='};
    return special[rand() % 13];
}

void generate_password(int length) {
	char password[MAX_PASSWORD_LENGTH];
    int i;

    srand(time(NULL));
    for (i = 0; i < length; i++) {
        int r = rand() % 4;
        if (r == 0) {
            password[i] = random_lowercase();
        } else if (r == 1) {
            password[i] = random_uppercase();
        } else if (r == 2) {
            password[i] = random_digit();
        } else {
            password[i] = random_special();
        }
    }

    password[length] = '\0';
    printf("Random password: %s\n", password);
}

