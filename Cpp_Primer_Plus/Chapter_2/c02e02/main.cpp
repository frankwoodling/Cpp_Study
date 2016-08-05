#include <iostream>

int main()
{
    int furlongs;

    std::cout << "Enter a distance in furlongs.";
    std::cin >> furlongs ;

    int yards = furlongs * 220;
    std::cout << furlongs << " furlongs is equal to " << yards << " yards.";

    return 0;
}