// convert light years to astronomical units

#include <iostream>

double ly_to_au(double);

int main() {
    double ly;
    double au;

    std::cout << "Enter the number of light years: ";
    std::cin >> ly;
    au = ly_to_au(ly);
    std::cout << ly << " light years = " << au << " astronomical units." ;
    return 0;
}

double ly_to_au(double ly)
{
    return ly*63240;
}