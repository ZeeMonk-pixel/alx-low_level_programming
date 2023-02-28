#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random lowercase letter
char random_lowercase() {
    return rand() % 26 + 'a';
}

// Function to generate a random uppercase letter
char random_uppercase() {
    return rand() % 26 + 'A';
}

// Function to generate a random digit
char random_digit() {
    return rand() % 10 + '0';
}

// Function to generate a random special character
char random_special() {
    char special[] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '+', '='};
    return special[rand() % 13];
}

// Function to generate a random password of a given length
void generate_password(int length) {
    char password[length+1];
    int i;

    // Seed the random number generator
    srand(time(NULL));

    // Generate the password
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

    // Print the password
    printf("Random password: %s\n", password);
}

