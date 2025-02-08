#include <iostream>
#include <string>

int main() {
    std::cout << "Welcome to C++ Pizza Deliveries ! \n";
    int bill = 0;
    std::string size;

//Getting size

    while (true) {
        std::cout << "What size pizza do you want? press capital S, M or L:\n";
        std::cin >> size;

        if (size == "L"){
            size = "a large..";
            std::cout << "So, we go for " << size << "\n";
            bill = 10;
            break;

        } else if (size == "M") {
            size = "a medium..";
            std::cout << "So, we go for " << size <<"\n";
            bill = 8;
            break;

        } else if (size == "S") {
            size = "a small..";
            std::cout << "So we go for " << size << "\n";
            bill = 6;
            break;

        } else {
            std::cout << "Input error, please enter a valid size..\n";
            continue;
        }

    }
    std::cout << "Your bill is " << bill << " $ at the moment ...";
    return 0;
}



//Start of python to convert

// #Start
//
// print("Welcome to Python Pizza Deliveries!")
//
// #Define bill
//
// bill = 0
//
// #get the size
// while True:
//     size = input("What size pizza do you want? press capital S, M or L: ")
//     if size == "S":
//         bill =(int(11))
//         break
//     elif size == "M":
//         bill = (int(15))
//         break
//     elif size == "L":
//         bill = (int(25))
//         break
//     else : print ("Wrong input, please retry ..")
//     continue
//
// #pepperoni option
//
// while True:
//     pepperoni = input("Do you want pepperoni on your pizza? Y or N: ")
//     if pepperoni == "N":
//         bill = bill
//         break
//     elif pepperoni == "Y":
//         bill += 2
//         break
//     else: print ("Wrong input, please retry .. we need to know if you want pepperoni on pizza NOW !")
//     continue
//
// #extra cheese
//
// while True:
//     cheese = input("Do you want extra cheese on your pizza? Y or N: ")
//     if cheese == "N":
//         bill = bill
//         break
//     elif cheese == "Y":
//         bill += 1
//         break
//     else: print ("Wrong input, please retry .. we need to know if you want EXTRA cheese on pizza RIGHT NOW !")
//     continue
//
// #Total
//
// print(f"Your total bill is {bill} $ , NOW GTFO of HERE !")
