#include <iostream>

using namespace std;


int elso_fuggvenyem(int, int); // függvény deklarációja
void csere(int*, int*);
void jobb_csere(int&, int&);

int main()
{
    int a,b;

    a = 5;
    b = 7;

    cout << a << ";" << b << endl;
 
    //csere(&a, &b);
    jobb_csere(a, b);

    cout << a << ";" << b << endl;

    cout << "POINTEREK\n";

    cout << "a erteke = " <<  a << endl;
    cout << "a helye= "   << &a << endl;

    int* p = &a; // ez azt jelenti, hogy a p-ben eltároljuk az a helyét

    cout << "p erteke = " << p << endl;
    cout << "p címen található dolog = " << *p << endl;
    cout << "p helye= " << &p << " (de ez most igazan nem lenyeges)" <<endl;

    // *p az, ami a memóriacímbõl elõállítja az ott lévõ dolgot
    // &a az, ami az a változóból elõszedi, hogy az milyen memóriacímen is van.



}

int elso_fuggvenyem(int a, int b) // függvény definíciója
{
    return 2 * a + b;
}

void csere(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void jobb_csere(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}