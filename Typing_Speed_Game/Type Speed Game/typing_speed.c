#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Sample sentences
#define MAX_SENTENCES 5
#define MAX_LENGTH 256

void display_sentence(int index, char sentences[][MAX_LENGTH]) {
    printf("\"%s\"\n", sentences[index]);
}

int calculate_correct_chars(char sentence[], char user_input[]) {
    int correct_chars = 0;
    for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] == user_input[i]) {
            correct_chars++;
        }
    }
    return correct_chars;
}

int main() {
    // Predefined sentences
    char sentences[MAX_SENTENCES][MAX_LENGTH] = {
        "The quick brown fox jumps over the lazy dog.",
        "Typing speed tests can improve your keyboard skills.",
        "Programming in C is both challenging and fun.",
        "Practice makes perfect in all aspects of life.",
        "A journey of a thousand miles begins with a single step."
    };

    printf("Welcome to the Typing Speed Test Game!\n");

    // Select a random sentence
    srand(time(0)); // Seed for random number generation
    int random_index = rand() % MAX_SENTENCES;

    printf("\nTyping Speed Test:\n");
    printf("Type the following sentence as quickly and accurately as possible:\n\n");
    display_sentence(random_index, sentences);
    printf("\nPress Enter when you're ready to start...\n");
    getchar(); // Wait for user to press Enter

    // Record start time
    clock_t start_time = clock();

    // Get user input
    char user_input[MAX_LENGTH];
    printf("Start typing: ");
    fgets(user_input, MAX_LENGTH, stdin);

    // Record end time
    clock_t end_time = clock();

    // Remove newline character from user input
    user_input[strcspn(user_input, "\n")] = '\0';

    // Calculate time taken
    double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    // Calculate correct characters
    int correct_chars = calculate_correct_chars(sentences[random_index], user_input);

    // Calculate accuracy
    double accuracy = (double)correct_chars / strlen(sentences[random_index]) * 100;

    // Calculate typing speed (characters per second)
    double typing_speed = strlen(user_input) / time_taken;

    // Display results
    printf("\nResults:\n");
    printf("Time taken: %.2f seconds\n", time_taken);
    printf("Typing speed: %.2f characters per second\n", typing_speed);
    printf("Accuracy: %.2f%%\n", accuracy);

    return 0;
}
