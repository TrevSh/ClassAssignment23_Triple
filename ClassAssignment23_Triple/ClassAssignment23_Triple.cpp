#include <iostream>
#include <string>

int triple(int number);
std::string triple(std::string word);           //Overloads last function if string is entered. Return and parameters must be different.

int main()
{
    std::cout << "Tripling 5: "<<triple(5)<<"\n\n";
    std::cout << "Tripling 'gamer': "<<triple("gamer") << "\n\n";

    system("pause");
    return 0;
}

int triple(int number) {
    return (number * 3);
}

std::string triple(std::string word) {
    return (word + word + word);
}
