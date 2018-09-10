#include <stddef.h>
#include <iostream>

class Node {
    public:
    //Data: What data type to use?
    int data;
    //Pointer to next node
    Node * next;

    //constructor
    Node(int data){
        next = NULL;
        data=0;
    }
};

int main() 
{ 
    std::cout << "hello";
    return 0; 
} 