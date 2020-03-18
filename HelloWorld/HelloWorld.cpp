// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int salary() {
    int wages, time;
    
    cout << "\n\nEnter the pay rate: $";
    cin >> wages;
    cout << "Enter the hours worked: ";
    cin >> time;
    return wages * time;
    
}

void timestable(int table, int number)
{
    int count = 1;
    while (count <= number) {
        cout << "\n" << table << " X " << count << " = " << count * table;
        count++;
    }
    
}
int main()
{
    int number, table;
    cout << "Hello World!\n"; 
    cout << "$" << salary(); 

    cout << "\n\nEnter the number for which you want to create a multiplication table: ";
    cin >> table;
    cout << "Enter the number of times for multiplication to occur: ";
    cin >> number;
    timestable(table, number);
    cout << "\n\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
