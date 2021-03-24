# include <stdio.h>
# include <math.h>
#include <stdbool.h>

int main()
{
    // Holds the user input that will be verified if it is a mersenne prime number
    int userInput;

    // Holds the calculated mersenne prime number that will be checked
    // against the user input
    int mersennePrime = 0;

    // Holds the flag that determines if the user input is a mersenne prime number
    bool isMersenne = false;

    printf("\n\nCheck whether a given number is Mersenne number or not : \n");

    // Requests input from the user
    printf("Input a number : ");
    scanf("%d", &userInput);

    // Loop through all the natural numbers that is less than the
    // input number or until a mersenne prime is found
    for (int naturalNum = 2; mersennePrime <= userInput && !isMersenne; naturalNum++)
    {
        // Calculate a mersenne prime with a power of 'naturalNum'
        mersennePrime = ((int)pow(2, naturalNum) - 1);

        // Verify if the user input is the same as the
        // calculated Mersenne Prime
        isMersenne = (mersennePrime == userInput);
    }

    // Print result of the user input
    if(isMersenne)
    {
        printf("%d is Mersenne number.\n", userInput);
    }
    else
    {
        printf("%d is not a Mersenne number.\n", userInput);
    }

    return 0;
}
