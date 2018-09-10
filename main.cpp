#include <stddef.h>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main()
{
    //initilize the linked list here
    //CODE

    //String will hold command
    string command;

    do
    {
        //take the command
        cin >> command;

        //commands
        if (command == "insertEnd"){
            cout << "you chose insertEnd\n";
            continue;
        }
        if (command == "insert"){
            cout << "you chose insert\n";
            continue;
        }
        if (command == "delete"){
            cout << "you chose delete\n";
            continue;
        }
        if (command == "edit"){
            cout << "you chose edit\n";
            continue;
        }
        if (command == "print"){
            cout << "you chose print\n";
            continue;
        }
        if (command == "search"){
            cout << "you chose search\n";
            continue;
        }

        //command was not found
        cout << "bad command\n";
    } while (command != "quit");
    return 0;
}
