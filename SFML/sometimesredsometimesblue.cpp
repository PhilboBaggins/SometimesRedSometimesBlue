#include <SFML/System.hpp>
#include <iostream>

int main()
{
    if (sf::Randomizer::Random(0, 1) == 0)
    {
        std::cout << "Red" << std::endl;
    }
    else
    {
        std::cout << "Blue" << std::endl;
    }
    return 0;
}
