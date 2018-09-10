#include <stddef.h>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

//DEFINES
#define getText getline(cin,text); formatString(text);

//LINKED LIST IMPLEMENTATION
//CODE

//FUNCTIONS
std::string formatString(std::string & s)
{
    //NEEDS CHECKING THAT STRING IS FORMATTED CORRECTLY (surrounded in quotes and correct size)
    s.pop_back();
    return s.erase(0,2);
}

//MAIN
int main()
{
    //create the linked list here
    //CODE

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
            cout << "you chose insertEnd\n";
            cout << text << endl;
            continue;
        }
        if (command == "insert"){
            cin >> lineNum;
            getText
            cout << "you chose insert\n";
            cout << lineNum << endl;
            cout << text << endl;
            continue;
        }
        if (command == "delete"){
            cin >> lineNum;
            cout << "you chose delete\n";
            cout << lineNum << endl;
            continue;
        }
        if (command == "edit"){
            cin >> lineNum;
            getText
            cout << "you chose edit\n";
            cout << lineNum << endl;
            cout << text << endl;
            continue;
        }
        if (command == "print"){
            cout << "you chose print\n";
            continue;
        }
        if (command == "search"){
            getText
            cout << "you chose search\n";
            cout << text << endl;
            continue;
        }
        //clear input before next input
        getline(cin,text);
    } while (command != "quit");
    return 0;
}
