# include <stdio.h>
# include <stdbool.h>
# include <math.h>

// Returns the sum of the number's proper divisors
static int getSumOfProperDivisors(int inputNumber);

// Check if the pair are amicable numbers
static bool isAmicablePair(int firstNum, int secondNum);

// Counts the amicable pair in the array
static int countAmicablePairs(int *arrayInput, int arraySize);

int main()
{
    int arrayNumberOfElements;
    int arrayCounter;

    printf("\n\nCount the Amicable pairs in a defined array : \n");

    // Ask input from the user
    printf("\nInput the number of elements to be stored in the array : ");
    scanf("%d", &arrayNumberOfElements);

    // Initialize the array with the specified number of elements
    int arrayInput[arrayNumberOfElements];

    // Ask the user for each element in the array
    for (arrayCounter = 0; arrayCounter < arrayNumberOfElements; arrayCounter++)
    {
        printf("element - %d : ", arrayCounter);
        scanf("%d", &arrayInput[arrayCounter]);
    }

    // Get array size
    int arraySize = sizeof(arrayInput) / sizeof(arrayInput[0]);

    // Print the result
    printf("Number of Amicable pairs present in the array : %d\n", countAmicablePairs(arrayInput, arraySize));

    return 0;
}

static int getSumOfProperDivisors(int inputNumber)
{
    int sumOfProperDivisors = 1;

    // Loop through all the possible divisors
    for (int divisorCtr = 2; divisorCtr <= sqrt(inputNumber); divisorCtr++)
    {
        // Verify that it is the number's proper divisor
        if (inputNumber % divisorCtr == 0)
        {
            // Add the found divisor to the accumulated sum
            sumOfProperDivisors += divisorCtr;

            if (inputNumber / divisorCtr != divisorCtr)
            {
                sumOfProperDivisors += inputNumber / divisorCtr;
            }
        }
    }

    return sumOfProperDivisors;
}

static bool isAmicablePair(int firstNum, int secondNum)
{
    return (getSumOfProperDivisors(firstNum) == secondNum &&
    getSumOfProperDivisors(secondNum) == firstNum);
}

static int countAmicablePairs(int *arrayInput, int arraySize)
{
    int totalAmicablePairs = 0;

    // Loop through all the array element for the first number of the amicable pair
    for (int firstNumIndex = 0; firstNumIndex < arraySize; firstNumIndex++)
    {
        // Loop through the array elements, after the first element in the outer loop,
        // for the second number of the amicable pair
        for (int secondNumIndex = firstNumIndex + 1; secondNumIndex < arraySize; secondNumIndex++)
        {
            // Verify that the first number and the second number is an amicable pair
            if (isAmicablePair(arrayInput[firstNumIndex], arrayInput[secondNumIndex]))
            {
                // An amicable pair found, increase count
                totalAmicablePairs++;
            }
        }
    }

    // Return the counted amicable pairs
    return totalAmicablePairs;
}