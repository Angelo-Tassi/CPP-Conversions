#include <iostream>
#include <string>

int main() {
    std::cout << "Welcome to C++ Pizza Deliveries ! \n";
    int bill = 0;
    std::string size;
    std::string pepperoni;
    std::string cheese;

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
    std::cout << "Your bill is " << bill << " $ at the moment ... \n";


    while (true) {
        std::cout<< "Do you want pepperoni added to your pizza ?\n"  "Type capital Y for yes and N for No :\n";
        std::cin >> pepperoni;
        if (pepperoni == "Y") {
            bill += 2;
            break;
        }if (pepperoni == "N"){
            std::cout << "Ok we will not charge pepperoni ..";
            break;

        }  else {
            std::cout << "Input error, please enter a valid option..\n";
            continue;
        }
    }
    std::cout << "Your bill is " << bill << " $ at the moment ...\n";

    while (true) {
        std::cout<< "Do you want extra cheese added to your pizza ?\n"  "Type capital Y for yes and N for No :\n";
        std::cin >> cheese;
        if (cheese == "Y") {
            bill += 1;
            break;
        }if (cheese == "N"){
            std::cout << "Ok we will not charge extra cheese ..";
            break;

        }  else {
            std::cout << "Input error, please enter a valid option..\n";
            continue;
        }
    }

    std::cout << "Your final bill is " << bill << " $ NOW GTFO of here ! ...\n";
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
