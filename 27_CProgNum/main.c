# include <stdio.h>
# include <math.h>

// Verify if a given number is a prime number
static int isPrime(long int inputNumber);

// Verify if a given number is a circular prime number
static int isCircularPrime(long int inputNumber);

int main()
{
    long int numberCounter;
    long int upperLimit;

    printf("\nFind Circular Prime Numbers upto a specific limit : \n");

    // Ask the user for the upper limit for finding circular prime numbers
    printf("Enter the upper limit : ");
    scanf("%li", &upperLimit);

    printf("\nThe Circular Prime Numbers less than %li are :\n", upperLimit);

    // Set the starting number for finding Circular Prime Numbers
    numberCounter = 2;

    // Loop until the counter reaches the set upper limit
    while (numberCounter <= upperLimit)
    {
        // Print of the current number if a Circular Prime
        if (isCircularPrime(numberCounter))
        {
            printf("%li ", numberCounter);
        }

        // Go to the next number
        numberCounter++;
    }

    printf("\n");


    return 0;
}

static int isPrime(long int inputNumber)
{
    int isPrime = 1;
    long int factor = inputNumber - 1;

    // Loop through all the possible factors less than the number
    while (factor >= 2)
    {
        // If there is a factor other than 1 and the input number
        // then it is not a prime number
        if (inputNumber % factor == 0)
        {
            isPrime = 0;
        }

        // Go to the next factor
        factor--;
    }

    return isPrime;
}

static int isCircularPrime(long int inputNumber)
{
    int isCircularPrime = 1;
    long int inputNumberCopy;
    long int digitPosition;
    long int digitPower;
    long int digitPositionCtr;
    long int totalNumberofDigits;
    long int originalIndexPosition;
    long int rotatedDigit;
    long int positionMultiplier;
    long int digitAtPosition;
    long int inputNumberDigitsFlipped[8];
    long int inputNumberDigits[8];
    long int cyclicRotationCounter;

    // Make a copy of the input number
    inputNumberCopy = inputNumber;

    // Set the initial value of the input number's total number of digits
    totalNumberofDigits = 0;

    // Save the individual digits of the input number to an array
    while (inputNumberCopy > 0)
    {
        // Save the least significant digit of the input number
        inputNumberDigits[totalNumberofDigits] = inputNumberCopy % 10;

        // Remove the least significant digit of the input number
        inputNumberCopy = inputNumberCopy / 10;

        // Increase digit count
        totalNumberofDigits++;
    }

    digitPosition = 0;

    // Flip the position of the extracted digits by saving it to a new array
    for (originalIndexPosition = totalNumberofDigits - 1; originalIndexPosition >= 0; originalIndexPosition--)
    {
        inputNumberDigitsFlipped[digitPosition] = inputNumberDigits[originalIndexPosition];
        digitPosition++;
    }

    // Get a copy of the total number of digits of the input number
    cyclicRotationCounter = totalNumberofDigits;

    // Loop until all the digits in the input number has completed all
    // the possible cyclic rotation of the input number
    while (cyclicRotationCounter > 0)
    {
        // Get the total number of digits in the array
        digitPosition = cyclicRotationCounter - 1;

        // The power that 10 should be raised to.
        // This will be used to put the individual digits
        // to its place in the cycled input number
        digitPower = totalNumberofDigits - 1;

        // The counter that will go through all the digits
        // saved in the position
        digitPositionCtr = 0;

        // The total number of rotated digits combination
        rotatedDigit = 0;

        while (digitPositionCtr < totalNumberofDigits)
        {
            // Calculate position multiplier for the digit
            positionMultiplier = pow(10, digitPower);

            // Set the saved digit to the position
            digitAtPosition = positionMultiplier * inputNumberDigitsFlipped[digitPosition % totalNumberofDigits];

            // Go to the next positioned digit
            digitPosition++;

            // Decrease the power value to position the digit to the position
            digitPower--;

            // Count the digits that were processed
            digitPositionCtr++;

            // Add the calculated digit to the cumulative sum to get the new digit
            rotatedDigit = rotatedDigit + digitAtPosition;
        }

        // Decrease the counter that determines the total
        // cycle rotated value to elevate
        cyclicRotationCounter--;

        // Verify if the rotated digit is a prime number
        if (!isPrime(rotatedDigit))
        {
            isCircularPrime = 0;
        }
    }

    return isCircularPrime;
}