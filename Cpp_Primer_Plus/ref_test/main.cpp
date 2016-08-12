#include <iostream>
using namespace std;

void test(int& num){
    num++;
    cout << "value of a inside function is: " << num << endl;

}

int main(){
    int a = 5;

    test(a);

    cout << "value of a in main is: " << a << endl;

    return 0;
}

// reference lets you change the value of a without returning from test