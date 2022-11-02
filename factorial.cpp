// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 10 - 30 - 22
// This program gets a number and adds up all the numbers leading up to it.

#include <iostream>
#include <string>

int main() {
    // Describing the program.
    std::cout <<
    "This program calculates the factorial of any whole number entered.\n";
    // Defining all the variables.
    std::string userNumStr;
    int userNumInt;
    int loopCounter;
    int factNum;
    float userNumFloat;
    loopCounter = 0;
    factNum = 1;
    int loopProd;
    std::cout << "What is the number you wish to calculate? ";
    std::cin >> userNumStr;
    // Using try catch to catch invalid input.
    try {
        userNumInt = std::stoi(userNumStr);
        // Troubleshooting.
        // Catching the decimals.
        if (userNumFloat = std::stof(userNumStr)) {
            if (userNumFloat != userNumInt) {
                std::cout << userNumFloat << " is not a whole number\n";
                return main();
            }
        }
        // Catching all the negative numbers.
        if (userNumInt < 0) {
            std::cout << "Your input " <<
            userNumInt << " is not a positive integer (e.g 5)\n";
            return main();}
        // O! is always 1.
        if (userNumInt == 0) {
            std::cout << "0! is 1\n";
            return main();
        }  // Process.
        do {
            loopCounter++;
            factNum *= loopCounter;
        } while (loopCounter < userNumInt);
        // Output.
        std::cout << userNumInt << "! is " << factNum << std::endl;
    } catch (std::invalid_argument) {;
        try {
            userNumFloat = static_cast<float>(userNumInt);
            std::cout << "Your input "
            << userNumStr << " is a decimal please enter an integer(e.g 5)\n";
            return main();
        } catch (std::invalid_argument) {
            std::cout << "Your input "
                      << userNumStr << " is not a valid integer (e.g 5)\n";
        }
        }
}

