#include <cs50.h>
#include <stdio.h>

int main(void) {
    int test_scores[4];

    // Prompt user for test scores
    for (int i = 0; i < 4; i++) {
        test_scores[i] = get_int("What did you score, boss?: ");
    }

    // Calculate the average score
    float average_score = (test_scores[0] + test_scores[1] + test_scores[2] + test_scores[3]) / 4.0; 

    // Print the average score with two decimal places
    printf("Average: %.2f\n", average_score);

    return 0; // Return 0 to indicate successful execution
}