// Developed a design that leads to an algorithm and a program that will read in a number that represents the number of kilometers traveled.
// Alberto Conde
// 31 August, 2020

#include <iostream>
using namespace std;

int main()
{
    float miles;
    float kilometers;
    
    cout << "How many kilometers did you traveled? ";
    cin >> kilometers;
    miles = kilometers * 0.621;
    cout << "This means you traveled " << miles << " miles.\n";
    return 0;
}





