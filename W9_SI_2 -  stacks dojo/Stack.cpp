#include "Stack.h"
#include <iostream>

void Stack::size(){
    std::cout << "Size of stack: " << rozmiar << std::endl;
}

bool Stack::push(int x){
    if (top < rozmiar) {
        arr[top] = x;
        top++;
        std::cout << "Number " << x << " added\n";
        return true;
    }
    else {
        std::cout << "Stack overflow\n";
        return false;
    }
}

bool Stack::pop(){
    if (top > 0) {
        std::cout << "Element " << arr[top-1] << " deleted\n";
        arr[top-1] = 0;
        top--;
        return true;
    }
    else {
        std::cout << "Stack underflow\n";
        return false;
    }

}

void Stack::emptySpace()
{
    if (top < 1)
        std::cout << "Empty space: " << rozmiar << std::endl;
    else
        std::cout << "Empty space: " << rozmiar - top << std::endl;
}

int Stack::peek(){
    if (top <= 0) {
        std::cout << "Stack is empty\n";
        return 0;
    }
    else {
        std::cout << "Top number is: " << arr[top-1] << std::endl;
        return arr[top-1];
    }
}

bool Stack::isEmpty(){
    if (top < 1) {
        std::cout << "STACK EMPTY\n";
        return true;
    }
    else {
        std::cout << "STACK NOT EMPTY\n";
        return false;
    } 
}

Stack::Stack(int nn) :rozmiar{ nn }, top{ 0 } {
    for (size_t i = 0; i < rozmiar; i++)
        arr[i] = 0;
}

void Stack::menu (int x )
{
    while (1) {
        std::cout << "\n1. PUSH\n";
        std::cout << "2. POP\n";
        std::cout << "3. PEEK\n";
        std::cout << "4. SIZE\n";
        std::cout << "5. EMPTY SPACE\n";
        std::cout << "6. EXIT\n\n";
        std::cout << "Choose option: ";

        int choice, numToAdd;
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter number you want to pushh to stack: ";
            std::cin >> numToAdd;
            push(numToAdd);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            size();
            break;
        case 5:
            emptySpace();
            break;
        case 6:
            exit(0);
            break;
        }
    }    
}
