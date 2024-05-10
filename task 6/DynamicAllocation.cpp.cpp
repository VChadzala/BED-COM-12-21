#include <iostream>
using namespace std;

int main() {
    int *pointer = new int();
    cout << "enter the value if int:" <<endl;
    cin >> *pointer;
    
    string *gizzo = new string();
    cout << "Enter the string characters:" <<endl;
    cin>> *gizzo;
    
    cout << "The value of the int value is: " << *pointer << endl;
    cout << "The value of the string value is: " << *gizzo;
    
    delete pointer;
    delete gizzo;

    return 0;
}

