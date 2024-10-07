#include <cs50.h>
#include <stdio.h>

int main(void){
    // declare the array first
    // integer array with 7 values 
    int sequence[7];
    // call the first element
    sequence[0] = 1;
    printf("%i\n", sequence[0]);
    
    // loop to add to the sequence up to 7 times
    // for loop sets i at 0, conditions i is less than 7, then adds to i after eveery iteration
    for (int i = 1; i < 7; i++)
    {
    //    starts at i = 0, takes that i minuses the 1, then multiples by 2
        sequence[i] = sequence[i - 1] * 2;

        // prints new value
        printf("%i\n", sequence[i]);
    }
    
return 0;
}