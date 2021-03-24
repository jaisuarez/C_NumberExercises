# include <stdio.h>

int main()
{
    // Holds the counter of the total pell numbers found in the series
    int pellSeriesCtr;

    // Holds the pell number that is in the position of n-1 from the current pell number
    int pellMinusOne = 0;

    // Holds the pell number that is in the position of n-2 from the current pell number
    int pellMinusTwo = 1;

    // Holds the most recent pell number in the series
    int pellNumber = 0;

    printf("\n\nFind the first 20 numbers of the Pell series :\n");
    printf("---------------------------------------------------\n");
    printf("The first 20 numbers of the Pell series are :\n");

    // Print the first number of the series
    printf(" %d ", pellNumber);

    // Loop until the next 19 numbers of the pell series are found
    for (pellSeriesCtr = 1; pellSeriesCtr < 20; pellSeriesCtr++)
    {
        // Calculate the nth number of the series
        pellNumber = pellMinusTwo + (2 * pellMinusOne);

        // Assign the (n-1)th number as the (n-2)th number for the next loop
        pellMinusTwo = pellMinusOne;

        // Assign the nth number as the (n-1)th number for the next loop
        pellMinusOne = pellNumber;

        // Print the nth number of the pell series
        printf("%d ", pellNumber);
    }

    return 0;
}
