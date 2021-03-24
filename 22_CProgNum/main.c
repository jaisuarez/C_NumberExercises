# include <stdio.h>

int main()
{
    // Holds the user's input
    int inputNumber;

    // Holds a copy of the user's input
    int inputNumberCopy;

    // Holds a flag that determines if the
    // number is a Duck Number
    int isDuck = 0;

    printf("Input a number : ");
    scanf("%d", &inputNumber);

    inputNumberCopy = inputNumber;

    // Loop until the input number becomes zero
    while (inputNumber > 0)
    {
        // If a 0 digit is found in the input number
        // then it is a Duck number
        if (inputNumber % 10 == 0)
        {
            isDuck = 1;

            // Confirmed that it is a duck number
            // so exit the loop early
            break;
        }

        // Remove the last digit from the input number
        inputNumber /= 10;
    }

    // Display the output
    if (inputNumberCopy > 0 && isDuck == 1)
    {
        printf("The given number is a Duck Number.\n");
    }
    else
    {
        printf("The given number is not a Duck Number.\n");
    }

    return 0;
}
