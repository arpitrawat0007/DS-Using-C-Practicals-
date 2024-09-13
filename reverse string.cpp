#include <iostream>
#include <string>

void reverseString(std::string& str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        // Swap characters at start and end indices
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move indices towards each other
        start++;
        end--;
    }
}

int main() {
    std::string inputString;

    // Input string from user
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    // Reverse the string
    reverseString(inputString);

    // Display the reversed string
    std::cout << "Reversed string: " << inputString << std::endl;

    return 0;
}
