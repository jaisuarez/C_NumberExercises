# include <stdio.h>

// Returns the number of digits of a number
static int lenCount(int inputNumber);

int main()
{
    // Holds the user input to be checked if it is a Keith Number or not
    int userInput = 0;

    // Holds the copy of the user input
    int userInputCopy = 0;

    // An array holding the last n numbers of a Keith Series
    int keithSeries[10];

    // A flag that determines if the verification is complete
    int processHasCompleted = 0;

    // Counts the total number of digits in a number
    int digitCtr = 0;

    // The most recent Keith Number in the Keith Series
    int sum = 0;

    printf("\n\nCheck whether a number is a Keith Number :\n");
    printf("Sample Keith numbers: 197, 742, 1104, 1537, 2208, 2580 .. \n");
    printf("-----------------------------------------------------------\n");

    // Request an input from the user
    printf("Input a number : ");
    scanf("%d", &userInput);

    // Make a copy of the user input for calculation
    userInputCopy = userInput;

    // From the n-digit userinput, get the first n numbers of the keith
    // series and save it to the array
    for (digitCtr = lenCount(userInputCopy) - 1; digitCtr >= 0; digitCtr--)
    {
        // Save the most significant digit of the user input
        keithSeries[digitCtr] = userInput % 10;

        // Remove the most significant digit from the user input
        userInput /= 10;
    }

    // Loop until the number is determined as a Keith Number or not
    while (processHasCompleted == 0)
    {
        // Get the sum of the last n numbers in the series where n
        // is the number of digits in the user input
        for (digitCtr = 0; digitCtr < lenCount(userInputCopy); digitCtr++)
        {
            sum += keithSeries[digitCtr];
        }

        // If the sum calculated above is the same as the user input
        // then it is a Keith Number. If it is more than the user input
        // then the user input is not a Keith Number
        if (sum == userInputCopy)
        {
            printf("The given number is a Keith Number.\n");

            // Set flag to signify process completion
            processHasCompleted = 1;
        }
        else if (sum > userInputCopy)
        {
            printf("The given number is not a Keith Number.\n");

            // Set flag to signify process completion
            processHasCompleted = 1;
        }

        // Shift the contents of the keithSeries array to the left, removing
        // the least significant number in the series. Then append
        // the calculated Keith Number to the end of the array
        for (digitCtr = 0; digitCtr < lenCount(userInputCopy); digitCtr++)
        {
            // If the counter has not reached the end of the
            // existing number in the keith series
            if (digitCtr != lenCount(userInputCopy) - 1)
            {
                // Shift position of the contents in the array to the left
                keithSeries[digitCtr] = keithSeries[digitCtr + 1];
            }
            else
            {
                // Save the recent keith number to the last position of the series
                keithSeries[digitCtr] = sum;
            }
        }

        // Reset value of sum to calculate for the next Keith Number in the series
        sum = 0;
    }

    return 0;
}

static int lenCount(int inputNumber)
{
    // Holds the total number of digits in the inputNumber
    int digitCounter = 0;

    // Count the total number of digits in the inputNumber
    while (inputNumber > 0)
    {
        // Remove the least significant digit in the number
        inputNumber = inputNumber / 10;

        // Increase the counter
        digitCounter++;
    }

    return digitCounter;
}