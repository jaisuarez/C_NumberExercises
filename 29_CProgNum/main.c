# include <stdio.h>
# include <math.h>

int main()
{
    int counter = 0;
    double fermatNumber;

    printf("\nDisplay first 10 Fermat numbers : \n");
    printf("The first 10 Fermat numbers are :\n");

    // Loop until counter reaches 10
    while (counter <= 10)
    {
        // Calculate fermat number using the formula :
        // 2 ^ (2 ^ n) + 1
        fermatNumber = pow(2, pow(2, counter)) + 1;

        // Increment number
        counter++;

        // Print fermat number
        printf("%lf \n", fermatNumber);
    }

    return 0;
}
