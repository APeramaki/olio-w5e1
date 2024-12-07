#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    cout << "a:n arvo on: " << a << "ja osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << "ja osoite on: " << &b << endl << endl;

    int *myPointer = &a;
    cout << "Pointterin osoittama osoite on : " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl << endl;

    myPointer = &b;
    cout << "Pointterin osoittama osoite on : " << myPointer << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << *myPointer << endl << endl;


    int &refA = a;
    cout << "Pointterin osoittama osoite on : " << &refA << endl;
    cout << "Pointterin osoittaman muistipaikan arvo on: " << refA << endl << endl;

    return 0;
}
