// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <time.h>

// // Sample sentences
// const char *sentences[] = {
//     "The quick brown fox jumps over the lazy dog.",
//     "Typing speed tests can improve your keyboard skills.",
//     "Programming in C is both challenging and fun.",
//     "Practice makes perfect in all aspects of life.",
//     "A journey of a thousand miles begins with a single step."
// };

// void typing_speed_test() {
//     srand(time(NULL));
    
//     // Select a random sentence
//     const char *selected_sentence = sentences[rand() % (sizeof(sentences) / sizeof(sentences[0]))];
    
//     printf("\nTyping Speed Test:\n");
//     printf("Type the following sentence as quickly and accurately as possible:\n\n");
//     printf("\"%s\"\n\n", selected_sentence);
//     printf("Press Enter when you're ready to start...\n");
//     getchar(); // Wait for user to press Enter

//     // Record start time
//     clock_t start_time = clock();

//     // Get user input
//     char user_input[256];
//     printf("Start typing: ");
//     fgets(user_input, sizeof(user_input), stdin);

//     // Record end time
//     clock_t end_time = clock();

//     // Calculate time taken
//     double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;

//     // Remove trailing newline from user input
//     user_input[strcspn(user_input, "\n")] = '\0';

//     // Calculate accuracy
//     int correct_chars = 0;
//     for (size_t i = 0; i < strlen(selected_sentence); i++) {
//         if (i < strlen(user_input) && selected_sentence[i] == user_input[i]) {
//             correct_chars++;
//         }
//     }
//     double accuracy = (double)correct_chars / strlen(selected_sentence) * 100;

//     // Calculate typing speed (characters per second)
//     double typing_speed = strlen(user_input) / time_taken;

//     // Display results
//     printf("\nResults:\n");
//     printf("Time taken: %.2f seconds\n", time_taken);
//     printf("Typing speed: %.2f characters per second\n", typing_speed);
//     printf("Accuracy: %.2f%%\n", accuracy);
// }

// int main() {
//     printf("Welcome to the Typing Speed Test Game!\n");
//     typing_speed_test();
//     return 0;
// }



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Maximum size definitions
#define MAX_PARAGRAPHS 3
#define MAX_LINES 5
#define MAX_LENGTH 256

// Function to display a paragraph
void display_paragraph(int index, char paragraphs[][MAX_LINES][MAX_LENGTH]) {
    for (int i = 0; i < MAX_LINES; i++) {
        printf("%s\n", paragraphs[index][i]);
    }
}

int calculate_correct_chars(char paragraph[][MAX_LENGTH], char user_input[]) {
    char combined_paragraph[MAX_LINES * MAX_LENGTH] = "";
    for (int i = 0; i < MAX_LINES; i++) {
        strcat(combined_paragraph, paragraph[i]);
        if (i < MAX_LINES - 1) {
            strcat(combined_paragraph, " ");
        }
    }

    int correct_chars = 0;
    for (int i = 0; i < strlen(combined_paragraph); i++) {
        if (i < strlen(user_input) && combined_paragraph[i] == user_input[i]) {
            correct_chars++;
        }
    }
    return correct_chars;
}

int main() {
    // Predefined paragraphs
    char paragraphs[MAX_PARAGRAPHS][MAX_LINES][MAX_LENGTH] = {
        {
            "The quick brown fox jumps over the lazy dog.",
            "Typing speed tests are a fun way to improve skills.",
            "Learning programming takes time and effort.",
            "Practice makes perfect in every aspect of life.",
            "Consistency is the key to success."
        },
        {
            "C programming is both challenging and rewarding.",
            "It is important to understand the basics first.",
            "Once you grasp the logic, things become easier.",
            "Solving problems helps you improve your skills.",
            "Never hesitate to seek help when stuck."
        },
        {
            "Technology has changed the way we live our lives.",
            "From communication to automation, it is everywhere.",
            "Learning to code opens up many opportunities.",
            "Programming requires patience and creativity.",
            "The future belongs to those who can adapt."
        }
    };

    printf("Welcome to the Typing Speed Test Game!\n");

    // Select a random paragraph
    srand(time(0)); // Seed for random number generation
    int random_index = rand() % MAX_PARAGRAPHS;

    printf("\nTyping Speed Test:\n");
    printf("Type the following paragraph as quickly and accurately as possible:\n\n");
    display_paragraph(random_index, paragraphs);
    printf("\nPress Enter when you're ready to start...\n");
    getchar(); // Wait for user to press Enter

    // Record start time
    clock_t start_time = clock();

    // Get user input
    char user_input[MAX_LINES * MAX_LENGTH];
    printf("Start typing (type the entire paragraph as a single line):\n");
    fgets(user_input, sizeof(user_input), stdin);

    // Record end time
    clock_t end_time = clock();

    // Remove newline character from user input
    user_input[strcspn(user_input, "\n")] = '\0';

    // Calculate time taken
    double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    // Calculate correct characters
    int correct_chars = calculate_correct_chars(paragraphs[random_index], user_input);

    // Calculate accuracy
    char combined_paragraph[MAX_LINES * MAX_LENGTH] = "";
    for (int i = 0; i < MAX_LINES; i++) {
        strcat(combined_paragraph, paragraphs[random_index][i]);
        if (i < MAX_LINES - 1) {
            strcat(combined_paragraph, " ");
        }
    }
    double accuracy = (double)correct_chars / strlen(combined_paragraph) * 100;

    // Calculate typing speed (characters per second)
    double typing_speed = strlen(user_input) / time_taken;

    // Display results
    printf("\nResults:\n");
    printf("Time taken: %.2f seconds\n", time_taken);
    printf("Typing speed: %.2f characters per second\n", typing_speed);
    printf("Accuracy: %.2f%%\n", accuracy);

    return 0;
}
