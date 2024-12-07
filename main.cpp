#include <iostream>
#include "aggregationa.h"
#include "assosiationa.h"

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


    // Part 2
    cout << "part 2:" << endl << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    // objAss contains a copy of objB
    objAss.setBinfo("Olion objAss asettama info");
    // as original objB and ObjAss's versions are not linked, there is no change in objB

    cout << "Assosiaatio esimerkki:" << endl;
    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAss: " << objAss.getBinfo() << endl;

    // Part 3
    cout << "Part 3" << endl << endl;

    cout << "Aggregaatio esimerkki:" << endl;
    ClassB &refB = objB;
    AggregationA objAggr(refB);
    // objAggr takes reference to refB.
    objAggr.setBinfo("Olion Agr asettama info");
    // As such, information in objB is changed as the underlying object is the same.

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAggr " << objAggr.getBinfo() << endl;
    cout << endl;

    return 0;
}
