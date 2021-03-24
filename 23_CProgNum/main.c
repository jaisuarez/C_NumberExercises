# include <stdio.h>

int main()
{
    // Holds the number to be checked
    int inputNumber;

    // Holds the number to be incremented from 1 to 500
    int inputCounter;

    // Holds a flag that determines if the number is a Duck number
    int isDuck = 0;

    printf("\n\nFind Duck Numbers between 1 to 500 : \n");
    printf("The Duck Numbers are : ");

    // Loop from 1 to 500 to check if each number is a duck number
    for (inputCounter = 1; inputCounter <= 500; inputCounter++)
    {
        // Set the number to be checked
        inputNumber = inputCounter;

        // Reset the flag
        isDuck = 0;

        // Loop until the input number becomes zero
        while (inputNumber > 0)
        {
            // If a 0 digit is found in the input number
            // then it is a Duck number
            if (inputNumber % 10 == 0)
            {
                // Sets the flag to indicate it is a duck number
                isDuck = 1;

                // Confirmed that it is a duck number so exit the loop early
                break;
            }

            // Remove the last digit from the input number
            inputNumber /= 10;
        }

        // Print if duck number
        if (inputCounter > 0 && isDuck == 1)
        {
            printf("%d ", inputCounter);
        }
    }

    printf("\n");

    return 0;
}
