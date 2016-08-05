#include <iostream>

using std::cout;

void mice();
void run();

int main()
{
    mice();
    mice();
    run();
    run();
}

void mice()
{
    cout << "Three blind mice" << std::endl;
}

void run()
{
    cout << "See how they run" << std::endl;
}
