#include <iostream>
using namespace std;

class Number1 {
public:
    int num1;

    Number1(int a) : num1(a) {}
};

class Number2 : protected Number1 {
protected:
    int num2;

public:
    Number2(int a, int b) : Number1(a), num2(b) {}
};

class Number3 : private Number2 {
private:
    int num3;

public:
    Number3(int a, int b, int c) : Number2(a, b), num3(c) {}

    int sum() {
        return num1 + num2 + num3;
    }
};

int main() {
    Number3 numbers(10, 20, 30);

    // Accessing the sum function
    int result = numbers.sum();

    std::cout << "Sum of the three numbers: " << result << std::endl;

    return 0;
}