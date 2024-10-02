#include <cs50.h>
#include <stdio.h>

int main(void) {
    int test_score1 = 56;
    int test_score2 = 65;
    int test_score3 = 76;
    
    // Calculates the average score
    float average_score = (test_score1 + test_score2 + test_score3) / 3.0; 
    
    // Prints the average score
    printf("Average: %f\n", average_score); // Print with two decimal places

    return 0; 
}