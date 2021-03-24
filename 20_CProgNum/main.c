# include <stdio.h>

int main()
{
    // Holds the number that will be incremented from 1 to 1000
    int inputNumber;

    // Holds that number that will count up to the user's input number
    int counter;

    // Holds the flag that will determine if input is a Pronic Number
    int isPronic;

    printf("\n\nFind the Pronic Numbers between 1 to 1000 : \n");
    printf("The Pronic Numbers are : \n");

    // Loop up to 1000 to find the pronic numbers within that range
    for (inputNumber = 1; inputNumber <= 1000; inputNumber++)
    {
        // Reset when testing a new number
        isPronic = 0;

        // Loop until counter reaches the value same as the input number
        for(counter = 1; counter <= inputNumber; counter++)
        {
            // If the product of counter and counter+1 is equivalent
            // to the input number then it is a pronic number
            if (counter * (counter + 1) == inputNumber)
            {
                isPronic = 1;

                // Exit loop if number is determined to be a pronic number
                break;
            }
        }

        // Print if the current number is a pronic number
        if (isPronic == 1)
        {
            printf("%d ", inputNumber);
        }
    }

    printf("\n");

    return 0;
}
