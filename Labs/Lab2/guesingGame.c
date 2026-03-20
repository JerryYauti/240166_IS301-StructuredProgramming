/*
Author: Jerry Yauti
Student ID: 240166
Date: March 20, 2026
Unit: IS301 Structured Programming

Algorithm:
1. Seed the random number generator and pick a number between 1 and 20.
2. Loop 5 times:
    a. Get user input via get_guess() function.
    b. Check if guess matches the target.
    c. If match: Print success and exit loop.
    d. If no match: Print hint (high/low) via hint_message() function.
3. If loop ends without a match, print sorry_message() with the correct number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function Prototypes as required by the lab 
int get_guess();
void hint_message(int guess, int secret);
void success_message();
void sorry_message(int secret);

int main() {
    int secret_number, current_guess;
    int max_tries = 5;
    int won = 0;

    // Initialize random seed and generate number between 1 and 20 [cite: 62, 72]
    srand(time(NULL));
    secret_number = (rand() % 20) + 1;

    printf("I am thinking of a number between 1 and 20.\n");
    printf("Can you guess what it is?\n");

    // Repetition Logic: 5 tries [cite: 62, 72]
    for (int i = 1; i <= max_tries; i++) {
        current_guess = get_guess();

        if (current_guess == secret_number) {
            success_message();
            won = 1;
            break; // Terminate immediately after correct guess [cite: 64, 72]
        } else {
            // Only print hint if they have tries left 
            if (i < max_tries) {
                hint_message(current_guess, secret_number);
            }
        }
    }

    // If user hasn't guessed the number after 5 tries [cite: 64]
    if (!won) {
        sorry_message(secret_number);
    }

    return 0;
}

// Function to get user input 
int get_guess() {
    int guess;
    printf("Enter your guess: ");
    scanf("%d", &guess);
    return guess;
}

// Function to print hints (unsuccessful guess message) 
void hint_message(int guess, int secret) {
    if (guess < secret) {
        printf("Your guess is low. Try again:\n");
    } else {
        printf("Your guess is high. Try again:\n");
    }
}

// Function to print success message [cite: 65, 68]
void success_message() {
    printf("Congratulations! You did it.\n");
}

// Function to print the sorry message after 5 failed tries [cite: 64, 65, 70]
void sorry_message(int secret) {
    printf("Sorry. The number was %d.\n", secret);
    printf("You should have gotten it by now. Better luck next time.\n");
}