#include <iostream>
#include "polynomial.h"

using namespace std;


int main() {


    Term a(3, 2, 'x');
    Term b(5, 1, 'x');
    Term c(4, 2, 'x');


    cout << "Compatible? ";

    if (a.compatible(c))
        cout << "Yes\n";
    else
        cout << "No\n";



    Term terms1[] = {
        Term(3,2,'x'),
        Term(5,1,'x'),
        Term(4,2,'x')
    };


    Polynomial p1(terms1, 3);


    cout << "P1 = ";
    cout << p1 << endl;



    Term terms2[] = {
        Term(2,2,'x'),
        Term(1,0,'x')
    };


    Polynomial p2(terms2, 2);


    cout << "P2 = ";
    cout << p2 << endl;



    Polynomial sum = p1 + p2;

    cout << "P1 + P2 = ";
    cout << sum << endl;



    Polynomial difference = p1 - p2;

    cout << "P1 - P2 = ";
    cout << difference << endl;



    Polynomial product = p1 * p2;

    cout << "P1 * P2 = ";
    cout << product << endl;


    return 0;
}