#include <cs50.h>
#include <stdio.h>

int main(void) {
    int score = get_int("Enter a score: ");
    printf("You entered: %i\n", score);
    return 0;
}