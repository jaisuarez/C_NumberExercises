# include <stdio.h>
# include <stdbool.h>

// Identify the prime numbers from 1 up to the upper limit
static void getPrimeNumbers(int upperLimit, bool *primeNumberFlags);

// Print the Mersenne Prime Numbers up to the set upper limit
static void printMersennePrimes(int upperLimit);

int main()
{
    long long userInput;

    printf("\n\nGenerate Mersenne primes within a range of numbers : \n");
    printf("--------------------------------------------------------\n");

    // Ask the user for the upper limit of the range
    printf("Input an upper limit [range from 1 to upper limit] : ");
    scanf("%lli", &userInput);

    printf("Mersenne prime numbers are : \n");

    printMersennePrimes(userInput);

    return 0;
}

static void getPrimeNumbers(int upperLimit, bool *primeNumberFlags)
{
    // Initially set all the flags of the mersenne prime number to true
    for (int naturalNumber = 0; naturalNumber <= upperLimit; naturalNumber++)
    {
        primeNumberFlags[naturalNumber] = true;
    }

    // Loop through all the number until the upper limit and set
    // the flag to false for non-prime numbers
    for (int power = 2; power * power <= upperLimit; power++)
    {
        if (primeNumberFlags[power] == true)
        {
            for (int i = power * 2; i <= upperLimit; i += power)
            {
                primeNumberFlags[i] = false;
            }
        }
    }
}

static void printMersennePrimes(int upperLimit)
{
    bool mersennePrimeFlags[upperLimit + 1];
    long long mersennePrime = 0;

    // Get the Mersenne Primes up to the range of the 'upperLimit'
    getPrimeNumbers(upperLimit, mersennePrimeFlags);

    // Loop through all the mersenne numbers
    for (int naturalNumber = 2; mersennePrime <= upperLimit; naturalNumber++)
    {
        // Calculate a mersenne number raised to the
        // power of 'naturalNumber'
        mersennePrime = ((1 << naturalNumber) - 1);

        // Check if the mersenne number is a mersenne prime number
        if (mersennePrimeFlags[mersennePrime])
        {
            printf(" %lli ", mersennePrime);
        }
    }
}