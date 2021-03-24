# include <stdio.h>
# include <stdbool.h>
# include <math.h>

// Returns the sum of the number's proper divisors
static int getSumOfProperDivisors(int inputNumber);

// Check if the pair are amicable numbers
static bool isAmicablePair(int firstNum, int secondNum);

int main()
{
    int firstInputNum;
    int secondInputNum;

    printf("\n\nCheck whether two numbers are Amicable pairs or not : \n");

    // Request input from the user
    printf("Input the 1st number : ");
    scanf("%d", &firstInputNum);
    printf("Input the 2nd number : ");
    scanf("%d", &secondInputNum);

    // Print the result
    if (isAmicablePair(firstInputNum, secondInputNum))
    {
        printf("The given numbers are an Amicable pair. \n");
    }
    else
    {
        printf("The given numbers are not an Amicable pair.\n");
    }

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