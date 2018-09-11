#include <stddef.h>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

//DEFINES
#define getText getline(cin,text); formatString(text);

//LINKED LIST IMPLEMENTATION
class LinkedList
{
    private:
    struct Node
    {
        std::string data;
        Node * next;

        Node ()
        {
            next = NULL;
            data = "";
        }
        Node (string d)
        {
            next = NULL;
            data = d;
        }
    };
    Node * head;
    Node * tail;
    int size;

    public:
    //default constructor
    LinkedList()
    {
        head = new Node();
        tail = head;
        size = 0;
    }

    //print function
    void print()
    {
        int lineNum = 1;
        //print function goes here
        Node * current = head->next;
        while (current != NULL)
        {
            cout << lineNum++ << " " << current->data << endl;
            current = current->next;
        }
    };

    //add function
    void add(string text, int index)
    {
        if (index < 1 || index > size +1) return;
        if (size == 0)
        {
            head->next = new Node(text);
            tail = head->next;
            size++;
            return;
        }
        if (index == size + 1)
        {
            addToEnd(text);
        }

        Node * current = head;
        
        for(int i = 0; i < index-1; i++)
        {
            current = current->next;
        }
        Node * temp = new Node(text);
        temp->next = current->next;
        current->next = temp;
        size++;
        
    };

    //add to end function
    void addToEnd(string text)
    {
        //add to end function goes here
        if (size == 0)
        {
            head->next = new Node(text);
            tail = head->next;
        }else
        {
            tail->next = new Node(text);
            tail = tail->next;
        }
        size++;
    };

    //delete function
    void del(int index)
    {
        //delete function goes here
        /* EDGE CASES */
        //make sure it is in bounds
        if (index > size || index < 1) return;
        if (index == 1)
        {
            head->next = head->next->next;
            if (size == 1) tail = head;
            size--;
            return;
        }
        /* EDGE CASES */

        Node * current = head;
        
        for(int i = 0; i < index-1; i++)
        {
            current = current->next;
        }
        if (index == size) tail = current;
        current->next = current->next->next;
        size--;
    };

    //edit function
    void edit(string text, int index)
    {
        if (index < 1 || index > size) return;
        Node * current = head;
        for(int i = 0; i < index; i++)
        {
            current = current->next;
        }
        current->data = text;
    };

    //search function
    void search(string text)
    {
        Node * current = head->next;
        int lineNum = 1;
        bool found = false;
        while(current != NULL)
        {
            if (current->data.find(text)!=std::string::npos)
            {
                found = true;
                cout << lineNum << " " << current->data << endl;
            }
            current = current->next;
            lineNum++;
        }
        if (!found)
        {
            cout << "Line not found" << endl;
        }
    }
};

//FUNCTIONS
std::string formatString(std::string & s)
{
    //NEEDS CHECKING THAT STRING IS FORMATTED CORRECTLY (surrounded in quotes and correct size)
    //checks size and cuts end off if too long
    if (s.length() > 83) s = s.substr(0,83);

    s.pop_back();
    return s.erase(0,2);
}

//MAIN
int main()
{
    //create the linked list here
    LinkedList ll;

    //strings will hold input
    string command;
    int lineNum;
    string text;
    do
    {
        //take the command
        cin >> command;

        //commands
        if (command == "insertEnd"){
            getText
            ll.addToEnd(text);
            continue;
        }
        if (command == "insert"){
            cin >> lineNum;
            getText
            ll.add(text, lineNum);
            continue;
        }
        if (command == "delete"){
            cin >> lineNum;
            ll.del(lineNum);
            continue;
        }
        if (command == "edit"){
            cin >> lineNum;
            getText
            ll.edit(text, lineNum);
            continue;
        }
        if (command == "print"){
            ll.print();
            continue;
        }
        if (command == "search"){
            getText
            ll.search(text);
            continue;
        }
        //clear input before next input
        getline(cin,text);
    } while (command != "quit");
    return 0;
}
