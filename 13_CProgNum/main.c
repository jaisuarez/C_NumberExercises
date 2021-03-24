# include <stdio.h>

int main()
{
    int inputNumber;
    int isAnUglyNumber = 0;

    printf("Input an integer number : ");
    scanf("%d", &inputNumber);

    if (inputNumber > 0)
    {
        while (inputNumber != 1)
        {
            // Check if divisible by 5
            if (inputNumber % 5 == 0)
            {
                inputNumber /= 5;
            }
            // Check if divisible by 3
            else if (inputNumber % 3 == 0)
            {
                inputNumber /= 3;
            }
            // Check if divisible by 2
            else if (inputNumber % 2 == 0)
            {
                inputNumber /= 2;
            }
            // The number is greater than one and not
            // divisible 2, 3, or 5.
            else
            {
                printf("It is not an ugly number.\n");
                isAnUglyNumber = 1;

                break;
            }
        }

        if (isAnUglyNumber == 0)
        {
            printf("It is an ugly number.\n");
        }
    }
    else
    {
        printf("Incorrect input!");
    }

    return 0;
}
