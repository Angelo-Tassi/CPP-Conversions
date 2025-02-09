#include <iostream>

int main() {
    for (int i = 1; i <= 100; i++) {

        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz " << std::endl;

        }  else if (i % 3 == 0) {
            std::cout << "Fizz" << std::endl;

        } else if (i % 5 == 0){
            std::cout << "Buzz" << std::endl;

        } else {
            std::cout << i << std::endl;
        }
    }
    return 0;
}

//Python to convert

// for number in range(1, 101):
//
//     if number % 3 == 0 and number % 5 == 0:
//
//         print("FizzBuzz")
//
//     elif number % 3 == 0:
//
//         print("Fizz")
//
//     elif number % 5 == 0:
//
//         print("Buzz")
//
//     else:
//         print(number)