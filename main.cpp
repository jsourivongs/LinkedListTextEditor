#include <stddef.h>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main()
{
    string s = "this is a string";
    istringstream iss(s);
    do
    {
        string subs;
        iss >> subs;
        cout << "Substring: " << subs << endl;
    } while (iss);
    return 0;
}
