#include <iostream>

int main()
{
    std::cout << "Enter a number : ";
    int numberA{};
    std::cin >> numberA;
    std::cout << "You selected the number : " << numberA << '\n';

    std::cout << "Now enter three numbers separated by spaces : ";
    int numberB{};
    int numberC{};
    int numberD{};
    std::cin >> numberB >> numberC >> numberD;
    std::cout << "You entered the numbers : " << numberB << ", " << numberC << ", and " << numberD << "\n";

    return 0;
}
