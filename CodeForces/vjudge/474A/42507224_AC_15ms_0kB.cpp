#include <iostream>
#include <string>

int main() {
    char shiftDirection;
    std::cin >> shiftDirection;

    std::string typedSequence;
    std::cin >> typedSequence;

    std::string originalMessage;
    std::string keyboardLayout = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for (char c : typedSequence) {
        std::size_t index = keyboardLayout.find(c);
        if (shiftDirection == 'R') {
            originalMessage += keyboardLayout[index - 1];
        } else {
            originalMessage += keyboardLayout[index + 1];
        }
    }

    std::cout << originalMessage << '\n';

    return 0;
}