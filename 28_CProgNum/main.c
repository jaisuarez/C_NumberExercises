# include <stdio.h>
# include <math.h>

int main()
{
    int inputNumber;
    int cubeRoot;

    printf("\nCheck whether a number is a perfect cube or not :\n");

    // Ask user for input
    printf("Input a number : ");
    scanf("%d", &inputNumber);

    // Calculate the cube root of the input number
    cubeRoot = round(pow(inputNumber, 1.0/3.0));

    // Verify if the input number is a perfect cube
    if (cubeRoot * cubeRoot * cubeRoot == inputNumber)
    {
        printf("The number is a perfect Cube of %d\n", cubeRoot);
    }
    else
    {
        printf("The number is NOT a perfect Cube.\n");
    }

    return 0;
}
