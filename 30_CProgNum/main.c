# include <stdio.h>

int main()
{
    // Holds the upper limit of the set range
    int userInput;

    printf("\n\nFind the numbers between a range that can be expressed as the sum of two cubes:\n");
    printf("Enter the upper limit of the range : ");
    scanf("%d", &userInput);

    printf("The numbers in the above range are : \n");

    // The following loop calculates the cube of each number ranging
    // from 1 up to the set upper limit and then find the combination
    // where the sum of two cubes of different numbers is the same

    // Loop from 1 up to the user defined upper limit of the range
    for(int firstNum = 1; firstNum <= userInput; firstNum++)
    {
        // Calculate the cube of the first number
        int cubeOfFirstNum = firstNum * firstNum * firstNum;

        // Exit loop if the cube result is greater than the upper limit
        if (cubeOfFirstNum > userInput) break;

        // Calculate the next cubed value less than the set upper limit
        for (int secondNum = firstNum; secondNum <= userInput; secondNum++)
        {
            // Calculate the cube of the second number
            int cubeOfSecondNum = secondNum * secondNum * secondNum;

            // The sum of first number and second number's cube must be
            // less than the upper limit to continue. Otherwise, exit the
            // entire loop
            if (cubeOfFirstNum + cubeOfSecondNum > userInput) break;

            // Calculate the third value that is less than the upper limit
            for (int thirdNum = firstNum + 1; thirdNum <= userInput; thirdNum++)
            {
                // Calculate the cube of the third number
                int cubeOfThirdNum = thirdNum * thirdNum * thirdNum;

                // Exit loop if the cube result is greater than the upper limit
                if (cubeOfThirdNum > cubeOfFirstNum + cubeOfSecondNum) break;

                // Calculate the fourth value that is less than the upper limit
                for (int fourthNum = thirdNum; fourthNum <= userInput; fourthNum++)
                {
                    // Calculate the cube of the fourth number
                    int cubeOfFourthNum = fourthNum * fourthNum * fourthNum;

                    // Exit loop if the cube result is greater than the upper limit
                    if (cubeOfThirdNum + cubeOfFourthNum > cubeOfFirstNum + cubeOfSecondNum) break;

                    // The sum of two cubes must have the same value
                    if (cubeOfFirstNum + cubeOfSecondNum == cubeOfThirdNum + cubeOfFourthNum)
                    {
                        // Display the sum of the two cubes
                        printf("%d = ", (cubeOfFirstNum + cubeOfSecondNum));

                        // Print the first pair of cubes that sums up to that value
                        printf("%d^3 + %d^3 = ", firstNum, secondNum);

                        // Print the second pair of cubes that sums up to that value
                        printf("%d^3 + %d^3", thirdNum, fourthNum);
                        printf("\n");
                    }
                }
            }
        }
    }

    return 0;
}
