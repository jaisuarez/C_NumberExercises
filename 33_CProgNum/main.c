# include <stdio.h>
# include <math.h>

int main()
{
    // Holds the lower limit of the specific range
    int lowerLimit;

    // Holds the upper limit of the specific range
    int upperLimit;

    // Counts the total number of digits in a number
    int digitsCounter;

    // The number to be checked if narcissistic or not
    int narcissisticNumber;

    // Holds the copy of the original number that will be operated on
    int narcissisticNumberCopy;

    // Holds a single digit of a number
    int singleDigit;

    // Holds the sum of the squares of the number's digits
    int sumOfPowers;

    printf("\n\nFind the narcissistic decimal numbers between a specific range :\n");
    printf("-------------------------------------------------------------------\n");

    // Request input from the user for the lower limit of the range
    printf("Input a lower limit : ");
    scanf("%d", &lowerLimit);

    // Request input from the user for the upper limit of the range
    printf("Input an upper limit : ");
    scanf("%d", &upperLimit);

    printf("The narcissistic decimal numbers between %d and %d are : \n", lowerLimit, upperLimit);

    // Loop until the entire range is covered
    for (narcissisticNumber = lowerLimit; narcissisticNumber <= upperLimit; narcissisticNumber++)
    {
        // Initialize the digit counter and the sum to zero
        // for the next narcissistic number search
        digitsCounter = 0;
        sumOfPowers = 0;

        // Copy the original number for the operation
        narcissisticNumberCopy = narcissisticNumber;

        // Count the number of digits in the number
        while (narcissisticNumberCopy > 0)
        {
            narcissisticNumberCopy = narcissisticNumberCopy / 10;
            digitsCounter++;
        }

        // Copy the original number again
        narcissisticNumberCopy = narcissisticNumber;

        // Calculate the sum of squares of the number
        while (narcissisticNumberCopy > 0)
        {
            // Get the least significant digit of the number to be tested
            singleDigit = narcissisticNumberCopy % 10;
            narcissisticNumberCopy = narcissisticNumberCopy / 10;

            // Add the result to the accumulated sum
            sumOfPowers = sumOfPowers + pow(singleDigit, digitsCounter);
        }

        // Check if it is a narcissistic number
        if (sumOfPowers == narcissisticNumber)
        {
            // Print the found narcissistic number
            printf(" %d ", narcissisticNumber);
        }
    }

    printf("\n");

    return 0;
}
