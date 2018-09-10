#include <stddef.h>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main()
{
    //initilize the linked list here
    //CODE

    //String will hold input
    string input;

    do
    {
        //take the input
        getline(cin,input);

        //commands
        if (input.substr(0,9) == "insertEnd"){
            cout << "you chose insertEnd\n";
            continue;
        }
        if (input.substr(0,6) == "insert"){
            cout << "you chose insert\n";
            continue;
        }
        if (input.substr(0,6) == "delete"){
            cout << "you chose delete\n";
            continue;
        }
        if (input.substr(0,4) == "edit"){
            cout << "you chose edit\n";
            continue;
        }
        if (input.substr(0,5) == "print"){
            cout << "you chose print\n";
            continue;
        }
        if (input.substr(0,6) == "search"){
            cout << "you chose search\n";
            continue;
        }

        //input was not found
        cout << "bad input: " << input << "\n";
    } while (input != "quit");
    return 0;
}
