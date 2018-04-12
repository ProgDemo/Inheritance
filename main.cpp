//https://www.tutorialspoint.com/cplusplus/cpp_inheritance.htm

#include <iostream>
#include "People.h"
#include "Student.h"

using namespace std;

void print(People p) {
    std::cout << p << endl;
}

int main()
{
    People p;
    People p2("Anybody", 23);

    cout << p << endl;
    cout << p2 << endl;

    Student s("X Y", "AAAAAA", 21);
    cout << s << endl;

    cout << "-----------------\n";

    print(p);
    print(s);

    return 0;
}
