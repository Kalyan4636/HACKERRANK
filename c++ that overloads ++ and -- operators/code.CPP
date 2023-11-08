#include <iostream>

class Counter {
public:
    Counter() { value = 0; }

    Counter& operator++() {
        ++value;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }

    Counter& operator--() {
        --value;
        return *this;
    }

    Counter operator--(int) {
        Counter temp = *this;
        --value;
        return temp;
    }

    int getValue() const { return value; }

private:
    int value;
};

int main() {
    Counter counter;

    std::cout << counter.getValue() << std::endl; // Outputs 0
    counter++;
    std::cout << counter.getValue() << std::endl; // Outputs 1
    ++counter;
    std::cout << counter.getValue() << std::endl; // Outputs 2

    Counter temp = counter++;
    std::cout << counter.getValue() << std::endl; // Outputs 3
    std::cout << temp.getValue() << std::endl; // Outputs 2

    counter--;
    std::cout << counter.getValue() << std::endl; // Outputs 2
    --counter;
    std::cout << counter.getValue() << std::endl; // Outputs 1

    return 0;
}