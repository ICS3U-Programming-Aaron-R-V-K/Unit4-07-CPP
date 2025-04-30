// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: April 29, 2025
// This program shows five numbers per line from 1000 until 2000
// It uses one For loop and one if statement inside

#include <iostream>

int main() {
    // Loop through numbers from 1000 to 2000
    for (int integer = 1000; integer <= 2000; ++integer) {
        // Display the current integer and the show a blanc space
        std::cout << integer << " ";

        // If the current integer remainder,
        // after being divided by 5 equals 0 it will go to the next line
        // This is so it only prints five numbers in one line
        if (integer  % 5 == 0) {
            std::cout << std::endl;
        }
    }

    return 0;
}
