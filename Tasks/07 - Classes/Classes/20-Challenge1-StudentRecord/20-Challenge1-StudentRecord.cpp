#include <iostream>
#include "StudentRecord.h"
using namespace std;

int main()
{
    cout << "Challenge 1\n";
    StudentRecord student1("Les", "Leyton", 12345);
    student1.display();
    student1.updateFirstName("dirty");
    student1.updateLastName("asshole");
    student1.display();
    student1.getFullName();
    student1.getID();
    
    //Test remaining member functions here
}
