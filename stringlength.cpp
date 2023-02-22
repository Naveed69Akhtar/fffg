#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name :\n";
    getline(cin, name);
    // cin.ignore();
    cout << "The lenghth of name is : " << name.length();
    return 0;
}