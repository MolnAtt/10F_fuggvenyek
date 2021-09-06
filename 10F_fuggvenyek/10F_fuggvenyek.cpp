#include <iostream>

using namespace std;


int elso_fuggvenyem(int, int); // f�ggv�ny deklar�ci�ja
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

    int* p = &a; // ez azt jelenti, hogy a p-ben elt�roljuk az a hely�t

    cout << "p erteke = " << p << endl;
    cout << "p c�men tal�lhat� dolog = " << *p << endl;
    cout << "p helye= " << &p << " (de ez most igazan nem lenyeges)" <<endl;

    // *p az, ami a mem�riac�mb�l el��ll�tja az ott l�v� dolgot
    // &a az, ami az a v�ltoz�b�l el�szedi, hogy az milyen mem�riac�men is van.



}

int elso_fuggvenyem(int a, int b) // f�ggv�ny defin�ci�ja
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